#include "data_header.h"

void chatbox(char color, char symbol, int size)
{
    const char *borderCode;
    switch (color)
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
        for(int col = 0; col <= size * 2; col++)
        {
            if(row == 0 || row == size - 1 || col == 0 || col == size * 2)
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
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("  ");
        }
        for(int space = 0; space <= row; space++)
        {
            printf("  ");
        }
        for(int s = size / 2 + 1; s > row; s--)
        {
            if(s == size  / 2 + 1 || s == row + 1)
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