#include "data_header.h"

// filled rectangle
void FilledRectangle(char borderColor, char fillColor, char symbol, int size)
{
    // Set the border color based on the user's selection
    const char *borderCode;
    switch (borderColor)
    {
    case 'b':
        borderCode = BLUE;
        break;
    case 'g':
        borderCode = GREEN;
        break;
    case 'r':
        borderCode = RED;
        break;
    case 'y':
        borderCode = YELLOW;
        break;
    default:
        printf("Invalid border color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }

    // Set the fill color based on the user's selection
    const char *fillCode;
    switch (fillColor)
    {
    case 'b':
        fillCode = BLUE;
        break;
    case 'g':
        fillCode = GREEN;
        break;
    case 'r':
        fillCode = RED;
        break;
    case 'y':
        fillCode = YELLOW;
        break;
    default:
        printf("Invalid fill color choice. Using default color (white).\n");
        fillCode = WHITE;
        break;
    }
    // draw rectangle
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size * 2; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size * 2 - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        printf("\n");
    }
}

// hollow rectangle
void HollowRectangle(char borderColor, char symbol, int size)
{
    // Set the border color based on the user's selection
    const char *borderCode;
    switch (borderColor)
    {
    case 'b':
        borderCode = BLUE;
        break;
    case 'g':
        borderCode = GREEN;
        break;
    case 'r':
        borderCode = RED;
        break;
    case 'y':
        borderCode = YELLOW;
        break;
    default:
        printf("Invalid border color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }

    // draw rectangle
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size * 2; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size * 2 - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}