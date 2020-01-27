#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "armstrong_numbers.h"

int is_armstrong_number(int candidate)
{
    int len = snprintf(NULL, 0, "%d", candidate);
    int current, remainder, temp = 1, sum = 0;

    current = candidate;

    while (current >= 1)
    {
        remainder = current % 10;
        for (int i = len; i >= 1; i--)
        {
            temp *= remainder;
        }
        sum += temp;
        current /= 10;
        temp = 1;
    }

    if (sum == candidate)
    {
        return 1;
    }
    return 0;
}
