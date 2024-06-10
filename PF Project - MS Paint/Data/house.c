#include "data_header.h"

void simple_filled_house(char borderColor, char fillColor, char symbol, int size)
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

    // draw house
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row - 1; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || row == size - 1 || s == (row * 2 + 1) - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        for (int s = size; s > row; s--)
        {
            if (row == 0 || row == size - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        for (int s = 0; s < size * 2 + 1; s++)
        {
            if (row == 0 || row == size - 1 || s == size * 2)
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
    for (int row = 0; row < size * 2; row++)
    {
        for (int s = 0; s < size * 2 - 1; s++)
        {
            if (s == 0 || s == (size * 2 - 1) - 1 || row == size * 2 - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        for (int s = 0; s <= size * 2 + 1; s++)
        {
            if (s == size * 2 + 1 || row == size * 2 - 1)
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

void simple_hollow_house(char borderColor, char symbol, int size)
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

    // draw house
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row - 1; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || row == size - 1 || s == (row * 2 + 1) - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        for (int s = size; s > row; s--)
        {
            if (row == 0 || row == size - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        for (int s = 0; s < size * 2 + 1; s++)
        {
            if (row == 0 || row == size - 1 || s == size * 2)
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
    for (int row = 0; row < size * 2; row++)
    {
        for (int s = 0; s < size * 2 - 1; s++)
        {
            if (s == 0 || s == (size * 2 - 1) - 1 || row == size * 2 - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        for (int s = 0; s <= size * 2 + 1; s++)
        {
            if (s == size * 2 + 1 || row == size * 2 - 1)
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

void inverted_filled_house(char borderColor, char fillColor, char symbol, int size)
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

    // draw inverted house
    for (int row = 0; row < size * 2; row++)
    {
        for (int s = 0; s < size * 2 - 1; s++)
        {
            if (s == 0 || s == (size * 2 - 1) - 2 || row == 0)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        for (int s = 0; s <= size * 2 + 1; s++)
        {
            if (s == size * 2 + 1 || row == 0)
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
    for (int row = size; row > 0; row--)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 - 1; s++)
        {
            if (s == 0 || row == 1 || s == (row * 2 - 1) - 1 || row == size)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        for (int s = size; s >= row; s--)
        {
            if (row == size || row == 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        for (int s = 0; s < size * 2 + 1; s++)
        {
            if (row == size || row == 1 || s == size * 2)
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

void inverted_hollow_house(char borderColor, char symbol, int size)
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

    // draw inverted house
    for (int row = 0; row < size * 2; row++)
    {
        for (int s = 0; s < size * 2 - 1; s++)
        {
            if (s == 0 || s == (size * 2 - 1) - 1 || row == 0)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        for (int s = 0; s <= size * 2 + 1; s++)
        {
            if (s == size * 2 + 1 || row == 0)
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
    for (int row = size; row > 0; row--)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 - 1; s++)
        {
            if (s == 0 || row == 1 || s == (row * 2 - 1) - 1 || row == size)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        for (int s = size; s >= row; s--)
        {
            if (row == size || row == 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        for (int s = 0; s < size * 2 + 1; s++)
        {
            if (row == size || row == 1 || s == size * 2)
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