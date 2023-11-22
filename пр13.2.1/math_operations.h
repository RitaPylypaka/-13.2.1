#pragma once
#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H
#define ADD(x, y) ((x) + (y))
#define MULTIPLY(x, y) ((x) * (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQR(x) ((x) * (x))
#define POW(x, y) (std::pow((x), (y)))
#define SQRT(x) (std::sqrt(x))
#define PRINTI(w) puts("control output")/ printf(#w"=%d\n", w)
#define PRINTR(w) puts ("rezult :") /printf(#w"=%f\n", (float)w)
#define CUBE(x) ((x)*(x)*(x))
#endif
