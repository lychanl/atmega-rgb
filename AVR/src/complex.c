#include <math.h>

#include "complex.h"


float magnitude(complex c) {
    return sqrt(c.re * c.re + c.im * c.im);
}
