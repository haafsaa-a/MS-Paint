#include "data_header.h"

void filled4sided_star(char borderColor, char fillColor, char symbol, int size)
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

    // draw star
    for(int row = 1; row <= size; row ++)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = 1; row <= size; row++)
    {
        for(int space = size; space > row; space--)
        {
            printf(" ");
        }
        for(int s = 0; s < row; s++)
        {
            if(s == 0)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("%s%c ",fillCode,symbol);
        }
        for(int s = 0; s <= row; s++)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < row; space++)
        {
            printf(" ");
        }
        for(int s = size; s > row; s--)
        {
            if(s == size)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("%s%c ",fillCode,symbol);
        }
        for(int s = size; s >= row; s--)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = size; row > 0; row --)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
}

void hollow4sided_star(char borderColor, char symbol, int size)
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

    // draw star
    for(int row = 1; row <= size; row ++)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = 1; row <= size; row++)
    {
        for(int space = size; space > row; space--)
        {
            printf(" ");
        }
        for(int s = 0; s < row; s++)
        {
            if(s == 0)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("  ");
        }
        for(int s = 0; s <= row; s++)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < row; space++)
        {
            printf(" ");
        }
        for(int s = size; s > row; s--)
        {
            if(s == size)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("  ");
        }
        for(int s = size; s >= row; s--)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = size; row > 0; row --)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void filled6sided_star(char borderColor, char fillColor, char symbol, int size)
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

    // draw star
    for(int row = 1; row <= size; row ++)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = 1; row <= size; row++)
    {
        for(int space = size; space > row; space--)
        {
            printf(" ");
        }
        for(int s = 0; s < row; s++)
        {
            if(s == 0)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("%s%c ",fillCode,symbol);
        }
        for(int s = 0; s <= row; s++)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < row; space++)
        {
            printf(" ");
        }
        for(int s = size; s > row; s--)
        {
            if(s == size)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("%s%c ",fillCode,symbol);
        }
        for(int s = size; s >= row; s--)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = size; row > size / 2; row --)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = size / 2; row < size; row ++)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = 1; row <= size; row++)
    {
        for(int space = size; space > row; space--)
        {
            printf(" ");
        }
        for(int s = 0; s < row; s++)
        {
            if(s == 0)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("%s%c ",fillCode,symbol);
        }
        for(int s = 0; s <= row; s++)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < row; space++)
        {
            printf(" ");
        }
        for(int s = size; s > row; s--)
        {
            if(s == size)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("%s%c ",fillCode,symbol);
        }
        for(int s = size; s >= row; s--)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
    for(int row = size; row > 0; row --)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf("%s%c",fillCode,symbol);
            }
        }
        printf("\n");
    }
}

void hollow6sided_star(char borderColor, char symbol, int size)
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

    // draw star
    for(int row = 1; row <= size; row ++)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = 1; row <= size; row++)
    {
        for(int space = size; space > row; space--)
        {
            printf(" ");
        }
        for(int s = 0; s < row; s++)
        {
            if(s == 0)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("  ");
        }
        for(int s = 0; s <= row; s++)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < row; space++)
        {
            printf(" ");
        }
        for(int s = size; s > row; s--)
        {
            if(s == size)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("  ");
        }
        for(int s = size; s >= row; s--)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = size; row > size / 2; row --)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = size / 2; row < size; row ++)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = 1; row <= size; row++)
    {
        for(int space = size; space > row; space--)
        {
            printf(" ");
        }
        for(int s = 0; s < row; s++)
        {
            if(s == 0)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("  ");
        }
        for(int s = 0; s <= row; s++)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = 0; row < size; row++)
    {
        for(int space = 0; space < row; space++)
        {
            printf(" ");
        }
        for(int s = size; s > row; s--)
        {
            if(s == size)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        for(int s = 0; s < size - 1; s++)
        {
            printf("  ");
        }
        for(int s = size; s >= row; s--)
        {
            if(s == row)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int row = size; row > 0; row --)
    {
        for(int space = 0; space < size; space++)
        {
            printf(" ");
        }
        for(int space = 0; space < size - row; space++)
        {
            printf(" ");
        }
        for(int t = 0; t < row * 2 - 1; t++)
        {
            if(t == 0 || t == (row * 2 - 1) - 1)
            {
                printf("%s%c",borderCode,symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}