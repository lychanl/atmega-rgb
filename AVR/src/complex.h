#ifndef _COMPLEX_H
#define _COMPLEX_H

typedef struct {
    float re;
    float im;
} complex;

float magnitude(complex c);

#endif