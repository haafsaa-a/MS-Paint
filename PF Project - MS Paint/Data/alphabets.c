#include "data_header.h"

void drawA(char color, char symbol, int size)
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

    // draw alphabet 'A'
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for (int s = 0; s < row * 2 + 1; s++)
        {
            if (s == 0 || s == (row * 2 + 1) - 1 || row == size / 2)
            {
                printf("%s%c", borderCode, symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void drawB(char color, char symbol, int size)
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

    // draw 'B'
    for (int row = 0; row <= size / 2; row++)
    {
        for (int s = 0; s <= size / 2; s++)
        {
            if (s == 0 || s == size / 2 || row == 0 || row == size / 2)
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
    for (int row = 0; row <= (size / 2) - 1; row++)
    {
        for (int s = 0; s <= size / 2; s++)
        {
            if (s == 0 || s == size / 2 || row == (size / 2) - 1)
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
void drawC(char color, char symbol, int size)
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

    // draw C
    for (int row = 0; row < size; row++)
    {
        for (int s = 0; s < size; s++)
        {
            if (row == 0 || row == size - 1 || s == 0)
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
void drawD(char color, char symbol, int size)
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

    // draw D
    for (int row = 0; row < size; row++)
    {
        for (int s = 0; s < size; s++)
        {
            if (row == 0 || row == size - 1 || s == 0 || s == size - 1)
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
void drawE(char color, char symbol, int size)
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

    // draw E
    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size; s++)
            {
                if (row == 0 || row == size - 1 || s == 0 || row == size / 2)
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
                if (row == 0 || row == size2 - 1 || s == 0 || row == size2 / 2)
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

void drawF(char color, char symbol, int size)
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

    // draw F
    for (int row = 0; row < size; row++)
    {
        if (size % 2 != 0)
        {
            for (int s = 0; s < size; s++)
            {
                if (row == 0 || s == 0 || row == size / 2)
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
        else
        {
            for (int s = 0; s < size; s++)
            {
                if (row == 0 || s == 0 || row == (size / 2) - 1)
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

void drawG(char color, char symbol, int size)
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

    // draw g
    for(int row = 0; row < size; row++)
    {
        for(int s = 0; s < size; s++)
        {
            if(row == 0 || s == 0 || row == size - 1 || (s == size - 1 && row > size / 2) || (row == size / 2 && s >= size / 2))
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

void drawH(char color, char symbol, int size)
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

    // draw H
    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size; s++)
            {
                if (row == size / 2 || s == 0 || s == size - 1)
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
                if (row == size2 / 2 || s == 0 || s == size2 - 1)
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

void drawI(char color, char symbol, int size)
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

    // draw I
    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size; s++)
            {
                if (s == size / 2 || row == 0 || row == size - 1)
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
        int size2 = size - 1;
        for (int row = 0; row < size2; row++)
        {
            for (int s = 0; s < size2; s++)
            {
                if (s == size2 / 2 || row == 0 || row == size2 - 1)
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

// for printing Alphabet "J"
void drawJ(char color, char symbol, int size)
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
    // Print the letter 'J' with the specified symbol and size
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == 0 || j == size / 2 || (i == size - 1 && j <= size / 2))
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

// draw K
void drawK(char color, char symbol, int size)
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
    // Print the alphabet 'K'
    // Upper part of 'K'
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == 0 || i + j == size + 1)
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

    // Lower part of 'K'
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == 0 || i == j)
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

// function to print alphabet "L"
void drawL(char color, char symbol, int size)
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
    // Print the 'L' symbol based on the given size parameter
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == 0 || i == size - 1)
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

// function for printing alphabet "M"
void drawM(char color, char symbol, int size)
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
    // Print the 'M' symbol based on the given size parameter
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size * 2); j++)
        {
            if (j == 0 || j == size * 2 - 1 || j == i || j == size * 2 - i - 1)
            {
                printf("%s%c", borderCode, symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// function for printing "N"
void drawN(char color, char symbol, int size)
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
    
    // draw N
    for(int row = 0; row < size; row++)
    {
        for(int s = 0; s < size; s++)
        {
            if(s == 0 || s == size - 1 || row == s)
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

// for printing alphabet "O"
void drawO(char color, char symbol, int size)
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
    // Loop to print 'O'
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

// for printing Alphabet "P"
void drawP(char color, char symbol, int size)
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
    // printing Alphabet P
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (j == 0 || (i == 0 || i == size / 2) && j < size / 2 || (j == size / 2 && i > 0 && i < size / 2))
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

void drawQ(char color, char symbol, int size)
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

    // draw Q
    for(int row = 0; row < size + size / 2; row++)
    {
        for(int s = 0; s < size + size / 2; s++)
        {
            if((row == 0 && s < size) || (s == 0 && row < size) || (row == size - 1 && s < size) || (s == size - 1 && row < size) || (row == s && row >= size / 2))
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

// for printing alphabet R
void drawR(char color, char symbol, int size)
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
    // Loop to print the "R"
    for (int row = 0; row < size; row++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((row == 0 || row == size / 2 || j == 0) && j < size - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else if (j == size - 1 && row != 0 && row != size / 2)
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

// for printing "S"
void drawS(char color, char symbol, int size)
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
    // Print the letter 'S'
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i == 0 || i == size - 1) && j < size - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else if (i < size / 2 && j == 0)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else if (i == size / 2)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else if (i > size / 2 && j == size - 1)
            {
                printf("%s%c  ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// for printing Alphabet "T"
void drawT(char color, char symbol, int size)
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
    // Print the letter 'T'
    if (size % 2 != 0)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (j == size / 2 || i == 0)
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
        for (int i = 0; i < size2; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                if (j == size2 / 2 || i == 0)
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

// draw U
void drawU(char color, char symbol, int size)
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

    // draw U
    for (int row = 0; row < size; row++)
    {
        for (int s = 0; s < size; s++)
        {
            if (s == 0 || row == size - 1 || s == size - 1)
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

void drawV(char color, char symbol, int size)
{
    const char *borderCode;
    // for printing alphabate v
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
    // Print the alphabet 'v'

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size * 2; j++)
        {
            if (j == i || j == size * 2 - 1 - i)
            {
                printf("%s%c", borderCode, symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void drawW(char color, char symbol, int size)
{
    const char *borderCode;
    // for printing alphabate w
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
    // Print the alphabet 'w'

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size * 4; j++)
        {
            if (j == i || j == size * 2 - i - 1 || j == size * 2 + i || j == size * 4 - i - 1)
            {
                printf("%s%c", borderCode, symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void drawX(char color, char symbol, int size)
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
    // Print the alphabet 'x'

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == i || j == size - i - 1)
            {
                printf("%s%c", borderCode, symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void drawY(char color, char symbol, int size)
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

    // draw Y
    if (size % 2 != 0)
    {
        for (int row = 0; row < size; row++)
        {
            for (int s = 0; s < size; s++)
            {
                if ((row + s == size - 1 && row < size / 2) || (s == size / 2 && row >= size / 2) || (row == s && row < size / 2))
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
                if ((row + s == size2 - 1 && row < size2 / 2) || (s == size2 / 2 && row >= size2 / 2) || (row == s && row < size2 / 2))
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

void drawZ(char color, char symbol, int size)
{
    const char *borderCode;
    // for printing alphabate z
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
    // Print the alphabet 'z'

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || i + j == size - 1)
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