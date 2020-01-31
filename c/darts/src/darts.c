#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "darts.h"

// score() - takes an x, y coordinate and returns an integer score
// define inner, middle, outer to hold radii
// calculate which circle the dart has landed in by comparing radii
// use pythagorean theorem to find the distance from the origin (0,0)

enum scores
{
    OUTSIDE = 0,
    INNER = 10,
    MIDDLE = 5,
    OUTER = 1,
};

int score(coordinate_t coord)
{

    float distance = sqrtf(powf(coord.x, 2) + powf(coord.y, 2));

    if (distance > 10)
    {
        return OUTSIDE;
    }
    else if (distance <= 10 && distance > 5)
    {
        return OUTER;
    }
    else if (distance <= 5 && distance > 1)
    {
        return MIDDLE;
    }
    else
    {
        return INNER;
    }
}
