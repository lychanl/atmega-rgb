import os
import numpy as np
import scipy.io
import scipy.fft


def load_data(path):
    data_files = {
        data_dir: [
            os.path.join(path, data_dir, f) for f in os.listdir(os.path.join(path, data_dir)) if f.endswith('.wav')
        ]
        for data_dir in os.listdir(path)
    }
    data = {
        data_dir: list(map(scipy.io.wavfile.read, files))
        for data_dir, files in data_files.items()
    }

    return data


def find_window(values, width):
    fw = np.cumsum(np.abs(values))
    
    start = np.argmax([fw[width + i] - fw[i] for i in range(len(values) - width)])
    end = start + width
    
    return start, end, np.mean(np.abs(values[:start])), np.mean(np.abs(values[end:]))


def process_data(data, length, frequency):
    data_processed = {}

    for data_dir, data_vs in data.items():
        print(data_dir)
        data_processed[data_dir] = []
        for data_v in data_vs:
            rate, data_channels = data_v
            for signal in data_channels.T:
                freq_mod = signal[::(rate // frequency)]

                s, e, _, _ = find_window(freq_mod, length)
                processed = freq_mod[s:e]

                fft = scipy.fft.fft(processed)
                
                data_processed[data_dir].append(np.abs(fft)[:length//2] / length)
    return data_processed
