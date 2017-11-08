/*
  Console Shapes
  (c) Afaan Bilal

  Draw simple shapes using unicode characters.
*/

#include <iostream>
#include <windows.h>

/*

REFERENCE: 
    SHAPE_(S|D)_(T|B|H|V|I|D)_(L|R)
        1.  S -> Single
            D -> Double
        2.  T -> Top
            B -> Bottom
            H -> Horizontal
            V -> Vertical
            I -> Inclining
            D -> Declining
        3.  L -> Left
            R -> Right

*/

const char * CORNER_S_T_L   = "\u250C";
const char * CORNER_S_T_R   = "\u2510";
const char * CORNER_S_B_L   = "\u2514";
const char * CORNER_S_B_R   = "\u2518";

const char * CORNER_D_T_L   = "\u2554";
const char * CORNER_D_T_R   = "\u2557";
const char * CORNER_D_B_L   = "\u255A";
const char * CORNER_D_B_R   = "\u255D";

const char * ARC_S_T_L      = "\u256D";
const char * ARC_S_T_R      = "\u256E";
const char * ARC_S_B_L      = "\u2570";
const char * ARC_S_B_R      = "\u256F";

const char * LINE_S_H       = "\u2500";
const char * LINE_S_V       = "\u2502";
const char * LINE_S_I       = "\u2571";
const char * LINE_S_D       = "\u2572";

const char * LINE_D_H       = "\u2550";
const char * LINE_D_V       = "\u2551";

const char * T_S_T          = "\u252C";
const char * T_S_B          = "\u2534";
const char * T_S_L          = "\u251C";
const char * T_S_R          = "\u2524";

const char * T_D_T          = "\u2566";
const char * T_D_B          = "\u2569";
const char * T_D_L          = "\u2560";
const char * T_D_R          = "\u2563";

const char * PLUS_S         = "\u253C";
const char * PLUS_D         = "\u256C";

const char * CROSS_S        = "\u2573";

const char * BLOCK          = "\u2588";

void square_single(int);
void square_single_curved(int);
void square_double(int);
void grid_single(int);
void grid_double(int);
void checker_board(int);
void progress(int);
void spinner(int);

/*
    Colors
*/
const char * COLOR_WHITE  = "\033[0m";  // white (normal)
const char * COLOR_RED    = "\033[31m"; // red
const char * COLOR_GREEN  = "\033[32m"; // green
const char * COLOR_ORANGE = "\033[33m"; // orange
const char * COLOR_BLUE   = "\033[34m"; // blue
const char * COLOR_PURPLE = "\033[35m"; // purple
const char * COLOR_CYAN   = "\033[36m"; // cyan
const char * COLOR_GREY   = "\033[37m"; // gray
const char * COLOR_TAN    = "\033[93m"; // tan

void colored_text(const char *, const char *);
void print_title(const char *, const char *);

int s = 5;

int main()
{
    std::cout << "CONSOLE SHAPES AND COLORS" << std::endl;
    std::cout << "https://github.com/AfaanBilal/console-shapes" << std::endl;

    std::cout << std::endl << "COLORED TEXT: ";
    
    colored_text(COLOR_RED, "RED ");
    colored_text(COLOR_GREEN, "GREEN ");
    colored_text(COLOR_ORANGE, "ORANGE ");
    colored_text(COLOR_BLUE, "BLUE ");
    colored_text(COLOR_PURPLE, "PURPLE ");
    colored_text(COLOR_CYAN, "CYAN ");
    colored_text(COLOR_GREY, "GREY ");
    colored_text(COLOR_TAN, "TAN ");
    
    print_title("SQUARE", "SINGLE LINE");
    square_single(s);
    
    print_title("SQUARE", "SINGLE LINE CURVED CORNERS");
    square_single_curved(s);

    print_title("SQUARE", "DOUBLE LINE");
    square_double(s);

    print_title("GRID", "SINGLE LINE");
    grid_single(s);

    print_title("GRID", "DOUBLE LINE");
    grid_double(s);

    print_title("CHECKER BOARD", "");
    checker_board(s);

    s = 10;
    print_title("PROGRESS", "");
    progress(s);

    print_title("SPINNER", "");
    spinner(s);
}

void square_single(int side)
{
    std::cout << CORNER_S_T_L;

    for (int i = 0; i < side*2 - 2; i++)
    {
        std::cout << LINE_S_H;
    }
    
    std::cout << CORNER_S_T_R << std::endl;
    
    for (int i = 0; i < side - 2; i++)
    {
        std::cout << LINE_S_V;
        for (int j = 0; j < side*2 - 2; j++)
        {
            std::cout << " ";
        }
        std::cout << LINE_S_V;
        std::cout << std::endl;
    }

    std::cout << CORNER_S_B_L;

    for (int i = 0; i < side*2 - 2; i++)
    {
        std::cout << LINE_S_H;
    }
    
    std::cout << CORNER_S_B_R;
}

void square_single_curved(int side)
{
    std::cout << ARC_S_T_L;

    for (int i = 0; i < side*2 - 2; i++)
    {
        std::cout << LINE_S_H;
    }
    
    std::cout << ARC_S_T_R << std::endl;
    
    for (int i = 0; i < side - 2; i++)
    {
        std::cout << LINE_S_V;
        for (int j = 0; j < side*2 - 2; j++)
        {
            std::cout << " ";
        }
        std::cout << LINE_S_V;
        std::cout << std::endl;
    }

    std::cout << ARC_S_B_L;

    for (int i = 0; i < side*2 - 2; i++)
    {
        std::cout << LINE_S_H;
    }
    
    std::cout << ARC_S_B_R;
}

void square_double(int side)
{
    std::cout << CORNER_D_T_L;

    for (int i = 0; i < side*2 - 2; i++)
    {
        std::cout << LINE_D_H;
    }
    
    std::cout << CORNER_D_T_R << std::endl;
    
    for (int i = 0; i < side - 2; i++)
    {
        std::cout << LINE_D_V;
        for (int j = 0; j < side*2 - 2; j++)
        {
            std::cout << " ";
        }
        std::cout << LINE_D_V;
        std::cout << std::endl;
    }

    std::cout << CORNER_D_B_L;

    for (int i = 0; i < side*2 - 2; i++)
    {
        std::cout << LINE_D_H;
    }
    
    std::cout << CORNER_D_B_R;
}

void grid_single(int side)
{
    std::cout << CORNER_S_T_L;

    for (int i = 0; i < side*2 - 1; i++)
    {
        if (i % 2 == 1)
            std::cout << T_S_T;
        else
            std::cout << LINE_S_H;
    }
    
    std::cout << CORNER_S_T_R << std::endl;
    
    for (int i = 0; i < side - 1; i++)
    {
        std::cout << T_S_L;
        for (int j = 0; j < side*2 - 1; j++)
        {
            if (j % 2 == 1)
                std::cout << PLUS_S;
            else
                std::cout << LINE_S_H;
        }
        std::cout << T_S_R;
        std::cout << std::endl;
    }

    std::cout << CORNER_S_B_L;

    for (int i = 0; i < side*2 - 1; i++)
    {
        if (i % 2 == 1)
            std::cout << T_S_B;
        else
            std::cout << LINE_S_H;
    }
    
    std::cout << CORNER_S_B_R;
}

void grid_double(int side)
{
    std::cout << CORNER_D_T_L;

    for (int i = 0; i < side*2 - 1; i++)
    {
        if (i % 2 == 1)
            std::cout << T_D_T;
        else
            std::cout << LINE_D_H;
    }
    
    std::cout << CORNER_D_T_R << std::endl;
    
    for (int i = 0; i < side - 1; i++)
    {
        std::cout << T_D_L;
        for (int j = 0; j < side*2 - 1; j++)
        {
            if (j % 2 == 1)
                std::cout << PLUS_D;
            else
                std::cout << LINE_D_H;
        }
        std::cout << T_D_R;
        std::cout << std::endl;
    }

    std::cout << CORNER_D_B_L;

    for (int i = 0; i < side*2 - 1; i++)
    {
        if (i % 2 == 1)
            std::cout << T_D_B;
        else
            std::cout << LINE_D_H;
    }
    
    std::cout << CORNER_D_B_R;
}

void checker_board(int side)
{
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            if ((i + j) % 2 == 0)
                std::cout << BLOCK << BLOCK;
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void progress(int side)
{
    std::cout << LINE_S_V << std::flush;
    for (int i = 0; i < side; i++)
    {
        Sleep(500);
        std::cout << BLOCK << std::flush;
    }
    std::cout << LINE_S_V << std::flush;
}

void spinner(int times)
{
    std::cout << "    " << std::flush;
    for (int i = 0; i < times; i++)
    {
        std::cout << "\b\b\b" << LINE_S_H << "  " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b" << LINE_S_D << "  " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b" << LINE_S_V << "  " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b" << LINE_S_I << "  " << std::flush;
        Sleep(100);
    }
}

void colored_text(const char * color, const char * text)
{
    std::cout << color << text << COLOR_WHITE;
}

void print_title(const char * line1, const char * line2)
{
    std::cout << std::endl << std::endl;
    colored_text(COLOR_ORANGE, line1);
    std::cout << std::endl;
    colored_text(COLOR_GREEN, line2);
    std::cout << std::endl;
    colored_text(COLOR_PURPLE, "LENGTH = ");
    std::cout << s;
    std::cout << std::endl << std::endl;
}
