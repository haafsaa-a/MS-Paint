#include "data_header.h"

void filled_butterfly(char borderColor, char fillColor, char symbol, int size)
{
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

    // draw filled butterfly
    if (size % 2 == 0)
    {
        for (int row = 0; row < size / 2; row++)
        {
            for (int s = 0; s < row + 1; s++)
            {
                if (s == 0 || s == row)
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("%s%c ", fillCode, symbol);
                }
            }
            for (int space = 0; space < (size - 2) - 2 * row; space++)
            {
                printf("  ");
            }
            for (int s = 0; s < row + 1; s++)
            {
                if (s == 0 || s == row)
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
        for (int row = 0; row < size / 2; row++)
        {
            for (int s = 0; s < size / 2 - row; s++)
            {
                if (s == 0 || s == size / 2 - row - 1)
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("%s%c ", fillCode, symbol);
                }
            }
            for (int space = 0; space < 2 * row; space++)
            {
                printf("  ");
            }
            for (int s = 0; s < size / 2 - row; s++)
            {
                if (s == 0 || s == size / 2 - row - 1)
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
    else
    {
        int size2 = size + 1;
        for (int row = 0; row < size2 / 2; row++)
        {
            for (int s = 0; s < row + 1; s++)
            {
                if (s == 0 || s == row)
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("%s%c ", fillCode, symbol);
                }
            }
            for (int space = 0; space < (size2 - 2) - 2 * row; space++)
            {
                printf("  ");
            }
            for (int s = 0; s < row + 1; s++)
            {
                if (s == 0 || s == row)
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
        for (int row = 0; row < size2 / 2; row++)
        {
            for (int s = 0; s < size2 / 2 - row; s++)
            {
                if (s == 0 || s == size2 / 2 - row - 1)
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("%s%c ", fillCode, symbol);
                }
            }
            for (int space = 0; space < 2 * row; space++)
            {
                printf("  ");
            }
            for (int s = 0; s < size2 / 2 - row; s++)
            {
                if (s == 0 || s == size2 / 2 - row - 1)
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
}

void hollow_butterfly(char borderColor, char symbol, int size)
{
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
    
    // draw filled butterfly
    if (size % 2 == 0)
    {
        for (int row = 0; row < size / 2; row++)
        {
            for (int s = 0; s < row + 1; s++)
            {
                if (s == 0 || s == row)
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("  ");
                }
            }
            for (int space = 0; space < (size - 2) - 2 * row; space++)
            {
                printf("  ");
            }
            for (int s = 0; s < row + 1; s++)
            {
                if (s == 0 || s == row)
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
        for (int row = 0; row < size / 2; row++)
        {
            for (int s = 0; s < size / 2 - row; s++)
            {
                if (s == 0 || s == size / 2 - row - 1)
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("  ");
                }
            }
            for (int space = 0; space < 2 * row; space++)
            {
                printf("  ");
            }
            for (int s = 0; s < size / 2 - row; s++)
            {
                if (s == 0 || s == size / 2 - row - 1)
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
    else
    {
        int size2 = size + 1;
        for (int row = 0; row < size2 / 2; row++)
        {
            for (int s = 0; s < row + 1; s++)
            {
                if (s == 0 || s == row)
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("  ");
                }
            }
            for (int space = 0; space < (size2 - 2) - 2 * row; space++)
            {
                printf("  ");
            }
            for (int s = 0; s < row + 1; s++)
            {
                if (s == 0 || s == row)
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
        for (int row = 0; row < size2 / 2; row++)
        {
            for (int s = 0; s < size2 / 2 - row; s++)
            {
                if (s == 0 || s == size2 / 2 - row - 1)
                {
                    printf("%s%c ", borderCode, symbol);
                }
                else
                {
                    printf("  ");
                }
            }
            for (int space = 0; space < 2 * row; space++)
            {
                printf("  ");
            }
            for (int s = 0; s < size2 / 2 - row; s++)
            {
                if (s == 0 || s == size2 / 2 - row - 1)
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
}