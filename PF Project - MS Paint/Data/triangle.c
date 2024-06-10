#include "data_header.h"

// simple filled triangle
void SimpleTriangleFilled(char borderColor, char fillColor, char symbol, int size)
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

    // Draw Simple Filled triangle

    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || s == (row * 2) || row == size - 1)
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

// simple hollow triangle
void SimpleTriangleHollow(char borderColor, char symbol, int size)
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

    // Draw simple hollow triangle
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || s == (row * 2) || row == size - 1)
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

//inverted triangle filled
void InvertedTriangleFilled(char borderColor, char fillColor, char symbol, int size)
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

    // inverted triangle
    for (int row = size; row > 0; row--)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 - 1; s++)
        {
            if (s == 0 || s == (row * 2 - 1) - 1 || row == size)
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

// inverted triangle hollow
void InvertedTriangleHollow(char borderColor, char symbol, int size)
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

    // inverted triangle
    for (int row = size; row > 0; row--)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 - 1; s++)
        {
            if (s == 0 || s == (row * 2 - 1) - 1 || row == size)
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