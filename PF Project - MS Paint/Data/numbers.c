#include "data_header.h"

void draw0(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }
    int i, j;
    // Loop to print 0
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  "); // Print space for hollow part
            }
        }
        printf("\n");
    }
}
void draw1(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }
    // Loop to print the number 1

    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size * 2; s++)
            {
                if ((row + s == size - 1 && row < size / 2) || s == size - 1 || (row == size - 1 && (s >= size / 2 && s < (size + size * 2) / 2)))
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
        for (int row = 0; row < size2; row++)
        {
            for (int s = 0; s < size2 * 2; s++)
            {
                if ((row + s == size2 - 1 && row < size2 / 2) || s == size2 - 1 || (row == size2 - 1 && (s >= size2 / 2 && s < (size2 + size2 * 2) / 2)))
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

// function for printing number 2
void draw2(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }

    // Loop to print the number 2
    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size; s++)
            {
                if (row == 0 || (s == size - 1 && row <= size / 2) || row == size / 2 || (s == 0 && row > size / 2) || row == size - 1)
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
        for (int row = 0; row < size2; row++)
        {
            for (int s = 0; s < size2; s++)
            {
                if (row == 0 || (s == size2 - 1 && row <= size2 / 2) || row == size2 / 2 || (s == 0 && row > size2 / 2) || row == size2 - 1)
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

// function for printing number 3
void draw3(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }
    // Loop to print the number 3
    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size; s++)
            {
                if (row == 0 || s == size - 1 || row == size / 2 || row == size - 1)
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
        for (int row = 0; row < size2; row++)
        {
            for (int s = 0; s < size2; s++)
            {
                if (row == 0 || s == size2 - 1 || row == size2 / 2 || row == size2 - 1)
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

// function for printing number 4
void draw4(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }
    // Loop to print the number 4
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)

        {
            if (i == size || j == 1 || j == size)
            {
                printf("%s %c", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)

        {
            if (j == size)
            {
                printf("%s %c", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// function for printing number 5
void draw5(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }

    // Loop to print the number 5
    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size; s++)
            {
                if (row == 0 || (s == 0 && row <= size / 2) || row == size / 2 || (s == size - 1 && row > size / 2) || row == size - 1)
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
        for (int row = 0; row < size2; row++)
        {
            for (int s = 0; s < size2; s++)
            {
                if (row == 0 || (s == 0 && row <= size2 / 2) || row == size2 / 2 || (s == size2 - 1 && row > size2 / 2) || row == size2 - 1)
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

// function for printing number 6
void draw6(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }
    // Loop to print the number 6
    for (int row = 0; row < size; row++)
    {
        for (int s = 0; s < size; s++)
        {
            if (row == 0 || s == 0 || row == size - 1 || (s == size - 1 && row > size / 2) || row == size / 2)
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

// function for printing number 7
void draw7(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }
    // Loop to print the number 7
    for (int row = 0; row < size; row++)
    {
        for (int s = 0; s < size; s++)
        {
            if (row == 0 || row + s == size - 1)
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

// function for printing number 8
void draw8(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }

    // Loop to print the number 8
    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size; s++)
            {
                if (row == 0 || row == size - 1 || s == 0 || s == size - 1 || row == size / 2)
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
        for (int row = 0; row < size2; row++)
        {
            for (int s = 0; s < size2; s++)
            {
                if (row == 0 || row == size2 - 1 || s == 0 || s == size2 - 1 || row == size2 / 2)
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

// function for printing number 9
void draw9(char color, char symbol, int size)
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
        printf("Invalid color choice. Using default color (white).\n");
        borderCode = WHITE;
        break;
    }
    // Loop to print the number 9
    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size; s++)
            {
                if (row == 0 || s == size - 1 || row == size - 1 || (s == 0 && row <= size / 2) || row == size / 2)
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
        for (int row = 0; row < size2; row++)
        {
            for (int s = 0; s < size2; s++)
            {
                if (row == 0 || s == size2 - 1 || row == size2 - 1 || (s == 0 && row <= size2 / 2) || row == size2 / 2)
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