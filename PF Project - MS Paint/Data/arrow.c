#include "data_header.h"

// up arrow filled
void UPArrowFilled(char borderColor, char fillColor, char symbol, int size)
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
    // draw up arrow
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || s == (row * 2) || row == size -1)
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
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < size; space++)
        {
            printf("  ");
        }
        for(int s = 0; s < size; s++)
        {
            if(s == 0)
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

// up arrow hollow
void UPArrowHollow(char borderColor, char symbol, int size)
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

    // draw up arrow
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf("  ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || s == (row * 2) || row == size -1)
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
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < size; space++)
        {
            printf("  ");
        }
        for(int s = 0; s < size; s++)
        {
            if(s == 0)
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

// down arrow filled 
void DOWNArrowFilled(char borderColor, char fillColor, char symbol, int size)
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
    // draw down arrow
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < size - 1; space++)
        {
            printf("  ");
        }
        for(int s = 0; s < size; s++)
        {
            if(s == 0)
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

// down arrow hollow
void DOWNArrowHollow(char borderColor, char symbol, int size)
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

    // draw down arrow
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < size - 1; space++)
        {
            printf("  ");
        }
        for(int s = 0; s < size; s++)
        {
            if(s == 0)
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

// left arrow filled
void LeftArrowFilled(char borderColor, char fillColor, char symbol, int size)
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
    // draw left arrow
    for (int row = 0; row < size; row++)
    {
        for (int spaces = 1; spaces <= size - row; spaces++)
        {
            printf("  ");
        }
        for (int s = 0; s < row; s++)
        {
            if (s == row - 1 || s == 0)
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
    for(int row = size; row > 0; row--)
    {
        for (int spaces = 1; spaces <= size - row; spaces++)
        {
            printf("  ");
        }
        for (int s = 1; s <= row; s++)
        {
            if (row == s || s == 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        for(int i = 0; i < size; i++)
        {
            if(row == size)
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

// left arrow hollow
void LeftArrowHollow(char borderColor, char symbol, int size)
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

    // draw left arrow
    for (int row = 0; row < size; row++)
    {
        for (int spaces = 1; spaces <= size - row; spaces++)
        {
            printf("  ");
        }
        for (int s = 0; s < row; s++)
        {
            if (s == row - 1 || s == 0)
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
    for(int row = size; row > 0; row--)
    {
        for (int spaces = 1; spaces <= size - row; spaces++)
        {
            printf("  ");
        }
        for (int s = 1; s <= row; s++)
        {
            if (row == s || s == 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        for(int i = 0; i < size; i++)
        {
            if(row == size)
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

// right arrow filled
void RightArrowFilled(char borderColor, char fillColor, char symbol, int size)
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
    // draw right arrow
    for(int row = 0; row <= size; row++)
    {
        for(int s = 0; s < size; s++)
        {
            if(row == size)
            {
                printf("%s%c ",borderCode,symbol);
            }
            else
            {
                printf("  ");
            }
        }
        for (int i = 0; i <= row; i++)
        {
            if (row == 0 || i == 0 || i == row)
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
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < size; space++)
        {
            printf("  ");
        }
        for(int i = size; i > row; i--)
        {
            if(i == size || i == row + 1)
            {
                printf("%s%c ",borderCode, symbol);
            }
            else
            {
                printf("%s%c ",fillCode,symbol);
            }
        }
        printf("\n");
    }
}

// right arrow hollow
void RightArrowHollow(char borderColor, char symbol, int size)
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

    // draw right arrow
    for(int row = 0; row <= size; row++)
    {
        for(int s = 0; s < size; s++)
        {
            if(row == size)
            {
                printf("%s%c ",borderCode,symbol);
            }
            else
            {
                printf("  ");
            }
        }
        for (int i = 0; i <= row; i++)
        {
            if (row == 0 || i == 0 || i == row)
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
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < size; space++)
        {
            printf("  ");
        }
        for(int i = size; i > row; i--)
        {
            if(i == size || i == row + 1)
            {
                printf("%s%c ",borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}