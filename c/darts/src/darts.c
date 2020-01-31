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

    printf("COORD 1 %f\n", coord.x);
    printf("COORD 2 %f\n", coord.y);

    float distance = sqrtf(powf(coord.x, 2) + powf(coord.y, 2));
    printf("DISTANCE IS %f\n", distance);

    if (distance > 10)
    {
        printf("DART IS OUTSIDE THE BOARD\n");
        return OUTSIDE;
    }
    else if (distance <= 10 && distance > 5)
    {
        printf("DART IS IN OUTER CIRCLE\n");
        return OUTER;
    }
    else if (distance <= 5 && distance > 1)
    {
        printf("DART IS IN MIDDLE CIRCLE\n");
        return MIDDLE;
    }
    else
    {
        return INNER;
    }
}
