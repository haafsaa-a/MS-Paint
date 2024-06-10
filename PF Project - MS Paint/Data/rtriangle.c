#include "data_header.h"

// simple right angled triangle filled
void SimpleRTriangleFilled(char borderColor, char fillColor, char symbol, int size)
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

    for (int row = 0; row < size; row++)
    {
        for (int s = 0; s <= row; s++)
        {
            if (row == 0 || row == size - 1 || s == 0 || s == row)
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

// simple right angled triangle hollow
void SimpleRTriangleHollow(char borderColor, char symbol, int size)
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

    for (int row = 0; row < size; row++)
    {
        for (int s = 0; s <= row; s++)
        {
            if (row == 0 || row == size - 1 || s == 0 || s == row)
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

// inverted right angled triangle filled
void InvertedRTriangleFilled(char borderColor, char fillColor, char symbol, int size)
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
 
    // draw inverted right angled triangle
    for (int row = 1; row <= size; row++)
    {
        for (int spaces = 1; spaces <= size - row; spaces++)
        {
            printf("  ");
        }
        for (int s = 1; s <= row; s++)
        {
            if (row == size || row == s || s == 1)
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

// inverted right angled triangle hollow
void InvertedRTriangleHollow(char borderColor, char symbol, int size)
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

    for (int row = 1; row <= size; row++)
    {
        for (int spaces = 1; spaces <= size - row; spaces++)
        {
            printf("  ");
        }
        for (int s = 1; s <= row; s++)
        {
            if (row == size || row == s || s == 1)
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