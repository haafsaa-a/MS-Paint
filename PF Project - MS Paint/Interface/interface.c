#include "interface_header.h"
#define QUIT_OPTION "q"
#define BACK_TO_MENU_OPTION "-1"

void clearScreen()
{
    system("cls");
}

void run_main_menu()
{
    clearScreen();
    char options[10];
    printf("------------------------------------------\n");
    printf("             WELCOME TO MS PAINT          \n");
    printf("------------------------------------------\n\n\n");

    printf("------------------------------------------\n");
    printf("                   OPTIONS                \n");
    printf("------------------------------------------\n\n");

    printf("1. Press 1 to make shapes.\n");
    printf("2. Press 2 for free hand drawing.\n");
    printf("3. Press 3 to save the file.\n");
    printf("4. Press 4 to view existing file.\n");
    printf("5. Press 5 to edit an existing file.\n");
    printf("q. Press 'q' to quit MS PAINT.\n\n");
    scanf("%s", &options);

    while (1)
    {
        if (strcmp(options, "1") == 0)
        {
            int choose_shape;
            printf("Choose the shape to be drawn.\n");
            printf("1.  Enter 1 to draw arrow.\n");
            printf("2.  Enter 2 to draw chat box.\n");
            printf("3.  Enter 3 to draw circle.\n");
            printf("4.  Enter 4 to draw diamond.\n");
            printf("5.  Enter 5 to draw heart.\n");
            printf("6.  Enter 6 to draw hexagon.\n");
            printf("7.  Enter 7 to draw line.\n");
            printf("8.  Enter 8 to draw paralellogram.\n");
            printf("9.  Enter 9 to draw pentagon.\n");
            printf("10. Enter 10 to draw rectangle.\n");
            printf("11. Enter 11 to draw rhombus.\n");
            printf("12. Enter 12 to draw right angled triangle.\n");
            printf("13. Enter 13 to draw square.\n");
            printf("14. Enter 14 to draw star.\n");
            printf("15. Enter 15 to draw trapezium.\n");
            printf("16. Enter 16 to draw triangle.\n");
            printf("17. Enter 17 to draw butterfly.\n");
            printf("18. Enter 18 to draw octagon.\n");
            printf("19. Enter 19 to draw house.\n\n");
            scanf("%d", &choose_shape);

            while (1)
            {
                if (choose_shape == 16)
                {
                    void triangle_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter position for shape (1 for left, 2 for middle, 3 for right):\n");
                        scanf("%d", &position_choice);

                        printf("Enter type of triangle (1 for simple & 0 for inverted):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of triangle:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        triangle_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 1)
                {
                    void arrows_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of arrow (1 for up arrow , 2 for down arrow , 3 for left arrow , 4 for right arrow):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of arrow:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        arrow_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 7)
                {
                    void line_interface();
                    {
                        int size, type, position_choice;
                        char color, symbol;

                        printf("Enter the type of line (1 for horizontal and 0 for vertical line):\n");
                        scanf("%d", &type);

                        printf("Enter size of line:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &color);

                        clearScreen();
                        line_functions(type, color, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 2)
                {
                    void chatbox_interface();
                    {
                        int size, position_choice;
                        char color, symbol;

                        printf("Enter size of chat box:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &color);

                        clearScreen();
                        chatbox_function(color, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 3)
                {
                    void circle_interface();
                    {
                        int size, fill, position_choice;
                        char fillcolor, bordercolor, symbol;

                        printf("Enter the type of circle (1 for filled and 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of circle:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &bordercolor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillcolor);
                        }

                        clearScreen();
                        circle_function(fill, bordercolor, fillcolor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 4)
                {
                    void diamond_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of diamond (1 for simple, 0 for half):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of diamond:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        diamond_function(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 5)
                {
                    void heart_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of heart (1 for simple, 0 for inverted):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of heart:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        heart_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 6)
                {
                    void hexagon_interface();
                    {
                        int size, fill, position_choice;
                        char fillcolor, bordercolor, symbol;

                        printf("Enter the type of hexagon (1 for filled and 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of hexagon:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &bordercolor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillcolor);
                        }

                        clearScreen();
                        hexagon_functions(fill, bordercolor, fillcolor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 8)
                {
                    void paralellogram_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of paralellogram (1 for simple, 0 for inverted):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of paralellogram:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        paralellogram_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 9)
                {
                    void pentagon_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of pentagon (1 for simple, 0 for inverted):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of pentagon:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        pentagon_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 10)
                {
                    void rectangle_interface();
                    {
                        int size, fill, position_choice;
                        char fillcolor, bordercolor, symbol;

                        printf("Enter the type of rectangle (1 for filled and 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of rectangle:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &bordercolor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillcolor);
                        }

                        clearScreen();
                        reactangle_functions(fill, bordercolor, fillcolor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 11)
                {
                    void rhombus_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of rhombus (1 for simple, 0 for inverted):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of rhombus:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        rhombus_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else if (strcmp(options, "0") == 0)
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 12)
                {
                    void rightangledtriangle_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of right angled triangle (1 for simple, 0 for inverted):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of triangle:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        rightangledtriangle_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 13)
                {
                    void square_interface();
                    {
                        int size, fill, position_choice;
                        char fillcolor, bordercolor, symbol;

                        printf("Enter the type of square (1 for filled and 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of square:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &bordercolor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillcolor);
                        }

                        clearScreen();
                        square_functions(fill, bordercolor, fillcolor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 14)
                {
                    void star_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of star (1 for four-sided, 0 for six-sided):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of star:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        star_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 15)
                {
                    void trapezium_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of trapezium (1 for simple, 0 for inverted):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of trapezium:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        trapezium_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 17)
                {
                    void butterfly_interface();
                    {
                        int size, fill, position_choice;
                        char fillcolor, bordercolor, symbol;

                        printf("Enter the type of butterfly (1 for filled and 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of butterfly:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &bordercolor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillcolor);
                        }

                        clearScreen();
                        butterfly_functions(fill, bordercolor, fillcolor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 18)
                {
                    void octagon_interface();
                    {
                        int size, fill, position_choice;
                        char fillcolor, bordercolor, symbol;

                        printf("Enter the type of octagon (1 for filled and 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of octagon:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &bordercolor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillcolor);
                        }

                        clearScreen();
                        octagon_functions(fill, bordercolor, fillcolor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else
                        {
                            clearScreen();
                            continue;
                        }
                    }
                }
                else if (choose_shape == 19)
                {
                    void house_interface();
                    {
                        int size, type, fill, position_choice;
                        char borderColor, fillColor, symbol;

                        printf("Enter the type of house (1 for simple, 0 for inverted):\n");
                        scanf("%d", &type);

                        printf("Enter fill type (1 for filled & 0 for hollow):\n");
                        scanf("%d", &fill);

                        printf("Enter size of house:\n");
                        scanf("%d", &size);

                        printf("Choose symbol to be used:\n");
                        scanf(" %c", &symbol);

                        printf("Enter border color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                        scanf(" %c", &borderColor);

                        if (fill == 1)
                        {
                            printf("Enter fill color ('r' for red, 'b' for blue, 'y' for yellow, and 'g' for green):\n");
                            scanf(" %c", &fillColor);
                        }

                        clearScreen();
                        house_functions(fill, type, borderColor, fillColor, symbol, size, position_choice);

                        printf("\nPress '-1' to go back to Main Menu or anyother key to redraw this shape.\n");
                        scanf("%s", &options);
                        if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                        {
                            clearScreen();
                            options[0] = '\0';
                            break;
                        }
                        else
                        {
                            clearScreen();
                            continue;
                        }
                    }
                    break;
                }
                else
                {
                    printf("Choose a valid shape\n");
                    printf("Choose the shape to be drawn.\n");
                    printf("1.  Press 1 to draw arrow.\n");
                    printf("2.  Press 2 to draw chat box.\n");
                    printf("3.  Press 3 to draw circle.\n");
                    printf("4.  Press 4 to draw diamond.\n");
                    printf("5.  Press 5 to draw heart.\n");
                    printf("6.  Press 6 to draw hexagon.\n");
                    printf("7.  Press 7 to draw line.\n");
                    printf("8.  Press 8 to draw paralellogram.\n");
                    printf("9.  Press 9 to draw pentagon.\n");
                    printf("10. Press 10 to draw rectangle.\n");
                    printf("11. Press 11 to draw rhombus.\n");
                    printf("12. Press 12 to draw right angled triangle.\n");
                    printf("13. Press 13 to draw square.\n");
                    printf("14. Press 14 to draw star.\n");
                    printf("15. Press 15 to draw trapezium.\n");
                    printf("16. Press 16 to draw triangle.\n");
                    printf("17. Enter 17 to draw butterfly.\n");
                    printf("18. Enter 18 to draw octagon.\n");
                    printf("19. Enter 19 to draw house.\n\n");
                    scanf("%d", &choose_shape);
                    continue;
                }
            }
        }
        else if (strcmp(options, "2") == 0)
        {
            while (1)
            {
                char symbol, color;
                int n;
                printf("Choose the symbol for freehand drawing:\n");
                scanf(" %c", &symbol);

                printf("Choose color for freehand drawing ('r' for red, 'y' for yellow, 'b' for blue, 'g' for green):\n");
                scanf(" %c", &color);

                printf("\nPress '-1' to go back to Main Menu or anyother key to continue freehand drawing.\n");
                scanf("%s", &options);
                if (strcmp(options, BACK_TO_MENU_OPTION) == 0)
                {
                    clearScreen();
                    options[0] = '\0';
                    break;
                }
                else
                {
                    clearScreen();
                    freehand_drawing_functions(symbol, color);
                }
            }
        }
        else if (strcmp(options, "3"))
        {
            
        }
        else if (strcmp(options, "q") == 0)
        {
            printf("Exiting MS PAINT.\n");
            exit(0);
        }
        else
        {
            printf("Choose a valid option from the following.\n\n");

            printf("------------------------------------------\n");
            printf("                   OPTIONS                \n");
            printf("------------------------------------------\n\n");

            printf("1. Press 1 to make shapes.\n");
            printf("2. Press 2 for free hand drawing.\n");
            printf("3. Press 3 to save the file.\n");
            printf("4. Press 4 to view existing file.\n");
            printf("5. Press 5 to edit an existing file.\n");
            printf("6. Press Q to quit MS PAINT.\n\n");
            scanf("%s", &options);

            if (strcmp(options, "q") == 0)
            {
                printf("Exiting MS PAINT.\n");
                break;
            }
            continue;
        }
    }
}
