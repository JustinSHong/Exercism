#include <stdint.h>
#ifndef DARTS_H
#define DARTS_H

typedef uint8_t coordinate_t[2 * sizeof(uint8_t)];
int score(coordinate_t);

#endif
