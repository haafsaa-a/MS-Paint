#include "data_header.h"

void Simple_filled_Paralellogram(char borderColor, char fillColor, char symbol, int size)
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
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for(int col = 0; col < size * 2; col++)
        {
            if(row == 0 || row == size - 1 || col == 0 || col == size * 2 - 1)
            {
                printf("%s%c ",borderCode,symbol);
            }
            else
            {
                printf("%s%c ",fillCode, symbol);
            }
        }
        printf("\n");
    }
}

void Simple_hollow_Paralellogram(char borderColor, char symbol, int size)
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

    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for(int col = 0; col < size * 2; col++)
        {
            if(row == 0 || row == size - 1 || col == 0 || col == size * 2 - 1)
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

void Inverted_filled_Paralellogram(char borderColor, char fillColor, char symbol, int size)
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
    for(int row = size; row > 0; row--)
    {
        for(int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for(int col = 0; col < size * 2; col++)
        {
            if(row == size || row == 1 || col == 0 || col == size * 2 - 1)
            {
                printf("%s%c ",borderCode,symbol);
            }
            else
            {
                printf("%s%c ",fillCode, symbol);
            }
        }
        printf("\n");
    }
}

void Inverted_hollow_Paralellogram(char borderColor, char symbol, int size)
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

    for(int row = size; row > 0; row--)
    {
        for(int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for(int col = 0; col < size * 2; col++)
        {
            if(row == size || row == 1 || col == 0 || col == size * 2 - 1)
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