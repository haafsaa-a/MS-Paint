#include "data_header.h"

void simple_filled_trapezium(char borderColor, char fillColor, char symbol, int size)
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

    // draw trapezium
    for(int row = size / 2; row <= size; row++)
    {
        for(int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for(int s = 0; s < row * 2 - 1; s++)
        {
            if(s == 0 || row == size / 2 || s == (row * 2 - 1) - 1 || row == size)
            {
                printf("%s%c ",borderCode,symbol);
            }
            else
            {
                printf("%s%c ",fillCode,symbol);
            }
        }
        printf("\n");
    }
}

void simple_hollow_trapezium(char borderColor, char symbol, int size)
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

    // draw trapezium
    for(int row = size / 2; row <= size; row++)
    {
        for(int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for(int s = 0; s < row * 2 - 1; s++)
        {
            if(s == 0 || row == size / 2 || s == (row * 2 - 1) - 1 || row == size)
            {
                printf("%s%c ",borderCode,symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void inverted_filled_trapezium(char borderColor, char fillColor, char symbol, int size)
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

    // draw trapezium
    for(int row = size; row >= size / 2; row--)
    {
        for(int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for(int s = 0; s < row * 2 - 1; s++)
        {
            if(s == 0 || row == size / 2 || s == (row * 2 - 1) - 1 || row == size)
            {
                printf("%s%c ",borderCode,symbol);
            }
            else
            {
                printf("%s%c ",fillCode,symbol);
            }
        }
        printf("\n");
    }
}

void inverted_hollow_trapezium(char borderColor, char symbol, int size)
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

    // draw trapezium
    for(int row = size; row >= size / 2; row--)
    {
        for(int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for(int s = 0; s < row * 2 - 1; s++)
        {
            if(s == 0 || row == size / 2 || s == (row * 2 - 1) - 1 || row == size)
            {
                printf("%s%c ",borderCode,symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}