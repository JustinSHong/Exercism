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

// assign a color to an index position
int color_code(int color)
{
    int color_codes[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
    return color_codes[color];
}

// // return an array of integers
// int colors() {}
