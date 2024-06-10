#include "brain_header.h"

void getConsoleSize(int *row, int *col)
{
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    *col = info.srWindow.Right - info.srWindow.Left + 1;
    *row = info.srWindow.Bottom - info.srWindow.Top + 1;
}

void gotoxy(int x, int y)
{
    COORD crd;
    crd.X = x;
    crd.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), crd);
}

void triangle_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    int row, col;
    getConsoleSize(&row, &col);

    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                SimpleTriangleFilled(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {

                SimpleTriangleHollow(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Inavalid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0)
        {
            if (fill_type == 1)
            {
                InvertedTriangleFilled(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                InvertedTriangleHollow(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else
        {
            printf("Invalid shape type\n");
            printf("Enter shape type (1 for simple, 0 for inverted):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void arrow_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1) // up arrow
        {
            if (fill_type == 1)
            {
                UPArrowFilled(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                UPArrowHollow(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 2) // down arrow
        {
            if (fill_type == 1)
            {
                DOWNArrowFilled(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                DOWNArrowHollow(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 3) // left arrow
        {
            if (fill_type == 1)
            {
                LeftArrowFilled(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                LeftArrowHollow(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Inavlid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 4)
        {
            if (fill_type == 1)
            {
                RightArrowFilled(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                RightArrowHollow(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else
        {
            printf("Invalid shape type\n");
            printf("Enter type of arrow (1 for up arrow, 2 for down arrow, 3 for left arrow, 4 for right arrow):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void chatbox_function(char borderColor, char symbol, int size, int position_choice)
{
    chatbox(borderColor, symbol, size);
}

void circle_function(int fill_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (fill_type == 1)
        {
            Filled_Circle(borderColor, fillColor, symbol, size);
            break;
        }
        else if (fill_type == 0)
        {
            Hollow_Circle(borderColor, symbol, size);
            break;
        }
        else
        {
            printf("Invalid fill type\n");
            printf("Enter fill type (1 for filled, 0 for hollow):\n");
            scanf("%d", &fill_type);
            continue;
        }
    }
}

void diamond_function(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                SimpleFilledDiamond(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                SimpleHollowDiamond(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0)
        {
            if (fill_type == 1)
            {
                HalfDiamondFilled(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                HalfDiamondHollow(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else
        {
            printf("Invalid shape type\n");
            printf("Enter type of diamond (1 for simple, 0 for half):\n");
            scanf("%d", &fill_type);
            continue;
        }
    }
}

void heart_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                Simple_filled_Heart(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                Simple_hollow_Heart(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0) // inverted heart
        {
            if (fill_type == 1)
            {
                Filled_Inverted_Heart(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                Hollow_Inverted_Heart(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid fill type\n");
                printf("Enter fill type (1 for filled, 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else
        {
            printf("Invalid Shape Type\n");
            printf("Enter type of heart (1 for simple, 0 for inverted):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void hexagon_functions(int fill_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (fill_type == 1)
        {
            filled_hexagon(borderColor, fillColor, symbol, size);
            break;
        }
        else if (fill_type == 0)
        {
            hollow_hexagon(borderColor, symbol, size);
            break;
        }
        else
        {
            printf("Invalid Fill Type\n");
            printf("Enter fill type (1 for filled, 0 for hollow):\n");
            scanf("%d", &fill_type);
            continue;
        }
    }
}

void line_functions(int shape_type, char color, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1) // horizontal line
        {
            draw_horizontal_Line(color, symbol, size);
            break;
        }
        else if (shape_type == 0) // vertical line
        {
            draw_vertical_Line(color, symbol, size);
            break;
        }
        else
        {
            printf("Invalid Shape Type\n");
            printf("Enter shape type (0 for vertical, 1 for horizontal):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void paralellogram_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                Simple_filled_Paralellogram(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                Simple_hollow_Paralellogram(borderColor, symbol, size);
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0)
        {
            if (fill_type == 1)
            {
                Inverted_filled_Paralellogram(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                Inverted_hollow_Paralellogram(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
        }
        else
        {
            printf("Invalid Shape Type\n");
            printf("Enter type of paralellogram (1 for simple & 0 for inverted):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void pentagon_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                simple_filled_pentagon(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                simple_hollow_pentagon(borderColor, symbol, size);
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0)
        {
            if (fill_type == 1)
            {
                inverted_filled_pentagon(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                inverted_hollow_pentagon(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
        }
        else
        {
            printf("Invalid Shape Type\n");
            printf("Enter type of pentagon (1 for simple & 0 for inverted):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void reactangle_functions(int fill_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (fill_type == 1)
        {
            FilledRectangle(borderColor, fillColor, symbol, size);
            break;
        }
        else if (fill_type == 0)
        {
            HollowRectangle(borderColor, symbol, size);
            break;
        }
        else
        {
            printf("Invalid Fill Type\n");
            printf("Enter fill type (1 for filled, 0 for hollow):\n");
            scanf("%d", &fill_type);
            continue;
        }
    }
}

void rhombus_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                Simple_filled_Rhombus(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                Simple_hollow_Rhombus(borderColor, symbol, size);
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0)
        {
            if (fill_type == 1)
            {
                Inverted_filled_Rhombus(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                Inverted_hollow_Rhombus(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
        }
        else
        {
            printf("Invalid Shape Type\n");
            printf("Enter type of rhombus (1 for simple & 0 for inverted):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void rightangledtriangle_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                SimpleRTriangleFilled(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                SimpleRTriangleHollow(borderColor, symbol, size);
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0)
        {
            if (fill_type == 1)
            {
                InvertedRTriangleFilled(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                InvertedRTriangleHollow(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
        }
        else
        {
            printf("Invalid Shape Type\n");
            printf("Enter type of triangle (1 for simple & 0 for inverted):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void square_functions(int fill_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (fill_type == 1)
        {
            filledSquare(borderColor, fillColor, symbol, size);
            break;
        }
        else if (fill_type == 0)
        {
            HollowSquare(borderColor, symbol, size);
            break;
        }
        else
        {
            printf("Invalid Fill Type\n");
            printf("Enter fill type (1 for filled, 0 for hollow):\n");
            scanf("%d", &fill_type);
            continue;
        }
    }
}
void star_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                filled4sided_star(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                hollow4sided_star(borderColor, symbol, size);
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0)
        {
            if (fill_type == 1)
            {
                filled6sided_star(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                hollow6sided_star(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
        }
        else
        {
            printf("Invalid Shape Type\n");
            printf("Enter type of star (1 for 4-sided & 0 for 6-sided):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void trapezium_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                simple_filled_trapezium(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                simple_hollow_trapezium(borderColor, symbol, size);
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0)
        {
            if (fill_type == 1)
            {
                inverted_filled_trapezium(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                inverted_hollow_trapezium(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
        }
        else
        {
            printf("Invalid Shape Type\n");
            printf("Enter type of trapezium (1 for simple & 0 for inverted):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}

void butterfly_functions(int fill_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (fill_type == 1)
        {
            filled_butterfly(borderColor, fillColor, symbol, size);
            break;
        }
        else if (fill_type == 0)
        {
            hollow_butterfly(borderColor, symbol, size);
            break;
        }
        else
        {
            printf("Invalid Fill Type\n");
            printf("Enter fill type (1 for filled, 0 for hollow):\n");
            scanf("%d", &fill_type);
            continue;
        }
    }
}

void house_functions(int fill_type, int shape_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (shape_type == 1)
        {
            if (fill_type == 1)
            {
                simple_filled_house(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                simple_hollow_house(borderColor, symbol, size);
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
            break;
        }
        else if (shape_type == 0)
        {
            if (fill_type == 1)
            {
                inverted_filled_house(borderColor, fillColor, symbol, size);
                break;
            }
            else if (fill_type == 0)
            {
                inverted_hollow_house(borderColor, symbol, size);
                break;
            }
            else
            {
                printf("Invalid Fill Type\n");
                printf("Enter fill type (1 for filled & 0 for hollow):\n");
                scanf("%d", &fill_type);
                continue;
            }
        }
        else
        {
            printf("Invalid Shape Type\n");
            printf("Enter type of house (1 for simple & 0 for inverted):\n");
            scanf("%d", &shape_type);
            continue;
        }
    }
}
void octagon_functions(int fill_type, char borderColor, char fillColor, char symbol, int size, int position_choice)
{
    while (1)
    {
        if (fill_type == 1)
        {
            filled_octagon(borderColor, fillColor, symbol, size);
            break;
        }
        else if (fill_type == 0)
        {
            hollow_octagon(borderColor, symbol, size);
            break;
        }
        else
        {
            printf("Invalid Fill Type\n");
            printf("Enter fill type (1 for filled, 0 for hollow):\n");
            scanf("%d", &fill_type);
            continue;
        }
    }
}

void freehand_drawing_functions(char symbol, char color)
{
    int row, col;
    getConsoleSize(&row, &col);
    char key1, key2;
    int x = 1, y = 1;

    const char *colorCode;
    switch (color)
    {
    case 'b':
        colorCode = BLUE;
        break;
    case 'g':
        colorCode = GREEN;
        break;
    case 'r':
        colorCode = RED;
        break;
    case 'y':
        colorCode = YELLOW;
        break;
    default:
        printf("Invalid color choice. Using default color (white).\n");
        colorCode = WHITE;
        break;
    }

    
    while (1)
    {
        if (kbhit())
        {
            key1 = getch();
            switch (key1)
            {
            case 72: // up arrow key
                if (y == 1)
                {
                    y = row;
                }
                else
                {
                    y--;
                }
                break;
            case 80: // down arrow key
                if (y == row)
                {
                    y = 1;
                }
                else
                {
                    y++;
                }
                break;
            case 75: // left arrow key
                if (x == 1)
                {
                    x = col;
                }
                else
                {
                    x--;
                }
                break;
            case 77: // right arrow key
                if (x == col)
                {
                    x = 1;
                }
                else
                {
                    x++;
                }
                break;
            case 113: // esc key
                exit(0);
                break;
            }
        }
        gotoxy(x, y);

        if (kbhit())
        {
            key2 = getch();

            if (key2 == 32 && (key1 == 72 || key1 == 80 || key1 == 75 || key1 == 77))
            {
                printf("%s%c", colorCode, symbol);
            }

            if(key2 == 8 && (key1 == 72 || key1 == 80 || key1 == 75 || key1 == 77))
            {
                printf(" ");
            }
            if(key2 == 45 && key1 == 49)
            {
                break;
            }
        }
        gotoxy(x, y);
    }
}
