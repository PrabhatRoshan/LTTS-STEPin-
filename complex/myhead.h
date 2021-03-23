#ifndef _MYFUNCH_
#define _MYFUNCH_

typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;

complex_t sum(complex_t num1, complex_t num2);

complex_t mul(complex_t num1, complex_t num2);

complex_t sub(complex_t num1, complex_t num2);

complex_t div(complex_t num1, complex_t num2);

#endif