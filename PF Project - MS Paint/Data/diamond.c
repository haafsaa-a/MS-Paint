#include "data_header.h"

// simple diamond filled
void SimpleFilledDiamond(char borderColor, char fillColor, char symbol, int size)
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
    // Filled diamond
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || s == (row * 2))
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
    for (int row = size; row >= 0; row--)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || s == (row * 2))
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

// simple diamond hollow
void SimpleHollowDiamond(char borderColor, char symbol, int size)
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

    // Hollow diamond
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || s == (row * 2))
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
    for (int row = size; row >= 0; row--)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || s == (row * 2))
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

// half diamond filled
void HalfDiamondFilled(char borderColor, char fillColor, char symbol, int size)
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

    // half diamond filled
    for (int row = 0; row < size; row++)
    {
        for (int s = 0; s <= row; s++)
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
    for (int row = size; row >= 0; row--)
    {
        for (int s = 0; s <= row; s++)
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
}

// half diamond hollow
void HalfDiamondHollow(char borderColor, char symbol, int size)
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

    // half diamond hollow
    for (int row = 0; row < size; row++)
    {
        for (int s = 0; s <= row; s++)
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
    for (int row = size; row >= 0; row--)
    {
        for (int s = 0; s <= row; s++)
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
}