#include "data_header.h"

void Filled_Circle(char borderColor, char fillColor, char symbol, int size)
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

    // draw circle
    for (int row = -size; row <= size; row++)
    {
        for (int s = -size; s <= size; s++)
        {
            if (s * s + row * row <= size * size)
            {
                if ((s * s + row * row <= size * size) && (s * s + row * row >= (size - 1) * (size - 1)))
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("%s%c ", fillCode, symbol);
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hollow_Circle(char borderColor, char symbol, int size)
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

    // draw circle
    for (int row = -size; row <= size; row++)
    {
        for (int s = -size; s <= size; s++)
        {
            if (s * s + row * row <= size * size)
            {
                if ((s * s + row * row <= size * size) && (s * s + row * row >= (size - 1) * (size - 1)))
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("  ");
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}