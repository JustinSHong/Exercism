#include <stdlib.h>
#include "resistor_color.h"

// Black: 0
// Brown: 1
// Red: 2
// Orange: 3
// Yellow: 4
// Green: 5
// Blue: 6
// Violet: 7
// Grey: 8
// White: 9

int color_code(resistor_band_t color)
{
    return color;
}

resistor_band_t *colors(void)
{
    const int length = color_code(BLACK) + color_code(WHITE);
    resistor_band_t *band_colors = malloc(length * sizeof(resistor_band_t));

    for (int i = 0; i <= length; i++)
    {
        band_colors[i] = i;
    }

    return band_colors;
}
