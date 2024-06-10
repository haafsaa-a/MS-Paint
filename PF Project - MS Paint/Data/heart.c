#include "data_header.h"

// filled heart
void Simple_filled_Heart(char borderColor, char fillColor, char symbol, int size)
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
    // draw heart
    for (int i = size / 2; i <= size; i += 2)
    {
        /* Printing Spaces */
        for (int j = 1; j < size - i; j += 2)
        {

            printf("  ");
        }
        /* printing stars for left semi circle */
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == size / 2 || j == i)
                printf("%s%c ", borderCode, symbol);
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        /* Printing Spaces */
        for (int j = 1; j <= size - i; j++)
        {
            printf("  ");
        }

        /* printing stars for right semi circle */
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == size / 2 || j == i)
                printf("%s%c ", borderCode, symbol);
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }

        printf("\n");
    }

    for (int i = size; i >= 1; i--)
    {
        for (int j = i; j < size; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            if (j == 1 || j == (i * 2) - 1)
            {

                printf("%s%c ", borderCode, symbol);
            }
            else if (j == size && i == size)
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
// hollow heart
void Simple_hollow_Heart(char borderColor, char symbol, int size)
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

    // draw heart
    for (int i = size / 2; i <= size; i += 2)
    {
        /* Printing Spaces */
        for (int j = 1; j < size - i; j += 2)
        {

            printf("  ");
        }
        /* printing stars for left semi circle */
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == size / 2 || j == i)
                printf("%s%c ", borderCode, symbol);
            else
            {
                printf("  ");
            }
        }
        /* Printing Spaces */
        for (int j = 1; j <= size - i; j++)
        {
            printf("  ");
        }

        /* printing stars for right semi circle */
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == size / 2 || j == i)
                printf("%s%c ", borderCode, symbol);
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    for (int i = size; i >= 1; i--)
    {
        for (int j = i; j < size; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            if (j == 1 || j == (i * 2) - 1)
            {

                printf("%s%c ", borderCode, symbol);
            }
            else if (j == size && i == size)
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

void Filled_Inverted_Heart(char borderColor, char fillColor, char symbol, int size)
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
    // draw heart
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = i; j < size; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {

            if (j == 1 || j == (i * 2) - 1)
            {

                printf("%s%c ", borderCode, symbol);
            }
            else if (j == size && i == size)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }

        /* move to next row */
        printf("\n");
    }

    for (int i = size; i >= size / 2; i = i - 2)
    {
        /* Printing Spaces */
        for (int j = 1; j < size - i + 1; j += 2)
        {

            printf("  ");
        }
        /* printing stars for left semi circle */
        for (int j = 1; j < i; j++)
        {
            if (j == 1 || i == size / 2 || j == i - 1)
                printf("%s%c ", borderCode, symbol);
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        } /* Printing Spaces */
        for (int j = 1; j <= size - i + 1; j++)
        {
            printf("  ");
        }

        /* printing stars for right semi circle */
        for (int j = 1; j < i; j++)
        {

            if (j == 1 || i == size / 2 || j == i - 1)
                printf("%s%c ", borderCode, symbol);
            else
            {
                printf("%s%c ", fillCode, symbol);
            }
        }
        printf("\n");
    }
}

void Hollow_Inverted_Heart(char borderColor, char symbol, int size)
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

    // draw heart
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = i; j < size; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {

            if (j == 1 || j == (i * 2) - 1)
            {

                printf("%s%c ", borderCode, symbol);
            }
            else if (j == size && i == size)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        }

        /* move to next row */
        printf("\n");
    }

    for (int i = size; i >= size / 2; i = i - 2)
    {
        /* Printing Spaces */
        for (int j = 1; j < size - i + 1; j += 2)
        {

            printf("  ");
        }
        /* printing stars for left semi circle */
        for (int j = 1; j < i; j++)
        {
            if (j == 1 || i == size / 2 || j == i - 1)
            {
                printf("%s%c ", borderCode, symbol);
            }
            else
            {
                printf("  ");
            }
        } /* Printing Spaces */
        for (int j = 1; j <= size - i + 1; j++)
        {
            printf("  ");
        }

        /* printing stars for right semi circle */
        for (int j = 1; j < i; j++)
        {

            if (j == 1 || i == size / 2 || j == i - 1)
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