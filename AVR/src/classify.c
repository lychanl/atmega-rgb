#include "classify.h"
#include "complex.h"
#include "model.h"


uint8_t classify(complex* fft, int rate) {
    float coords[CLASSIFY_FFT_N];
    for (int i = 0; i < CLASSIFY_FFT_N; ++i) {
        coords[i] = 0;
        for (int j = 0, k=0; j < CLASSIFY_FFT_W; j += CLASSIFY_FFT_D, ++k) {
            float mag = magnitude(fft[j]) / rate;
            coords[i] += mag * WEIGHTS[k][i];
        }
    }

    float best_dist = THRESHOLD;
    uint8_t bestc = 0;

    for (int i = 0; i < 3; ++i) {
        float sqdist = 0;
        for (int j = 0; j < CLASSIFY_FFT_N; ++j) {
            float d = coords[j] - TEMPLATES[i][j];
            sqdist += d * d;
        }

        if (sqdist < best_dist) {
            bestc = CLASSES[i];
        }
    }

    return bestc;
}
