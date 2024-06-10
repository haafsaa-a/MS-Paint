#include "data_header.h"

// ANSI escape codes for text colors
#define BLUE "\033[34m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define WHITE "\033[0m"

void draw_horizontal_Line(char color, char symbol, int size)
{
    // Set the color based on the user's selection
    const char *colorcode;
    switch (color)
    {
    case 'b':
        colorcode = BLUE;
        break;
    case 'g':
        colorcode = GREEN;
        break;
    case 'r':
        colorcode = RED;
        break;
    case 'y':
        colorcode = YELLOW;
        break;
    default:
        printf("Invalid color choice. Using default color (white).\n");
        colorcode = WHITE;
        break;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%s%c ", colorcode, symbol);
    }
}

void draw_vertical_Line(char color, char symbol, int size)
{
    // Set the color based on the user's selection
    const char *colorcode;
    switch (color)
    {
    case 'b':
        colorcode = BLUE;
        break;
    case 'g':
        colorcode = GREEN;
        break;
    case 'r':
        colorcode = RED;
        break;
    case 'y':
        colorcode = YELLOW;
        break;
    default:
        printf("Invalid color choice. Using default color (white).\n");
        colorcode = WHITE;
        break;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%s%c\n", colorcode, symbol);
    }
}