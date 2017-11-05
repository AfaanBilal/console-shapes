/*
  Console Shapes
  (c) Afaan Bilal

  Draw simple shapes using unicode characters.
*/

#include <iostream>

/*
 REF: SHAPE_(S|D)_(T|B)_(L|R)
      S | D -> Single | Double
      T | B -> Top    | Bottom
      L | R -> Left   | Right
*/

const char * CORNER_S_T_L   = "\u250C";
const char * CORNER_S_T_R   = "\u2510";
const char * CORNER_S_B_L   = "\u2514";
const char * CORNER_S_B_R   = "\u2518";

const char * CORNER_D_T_L   = "\u2554";
const char * CORNER_D_T_R   = "\u2557";
const char * CORNER_D_B_L   = "\u255A";
const char * CORNER_D_B_R   = "\u255D";

const char * LINE_S_H       = "\u2500";
const char * LINE_S_V       = "\u2502";
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

int main()
{
    std::cout << "CONSOLE SHAPES" << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "SQUARE" << std::endl << "SINGLE LINE" << std::endl << "SIDE = 10 units";
    std::cout << std::endl;
    square_single(10);
    std::cout << std::endl << std::endl;
    std::cout << "SQUARE" << std::endl << "DOUBLE LINE" << std::endl << "SIDE = 10 units";
    std::cout << std::endl;
    square_double(10);
    std::cout << std::endl << std::endl;
    std::cout << "GRID" << std::endl << "SINGLE LINE" << std::endl << "SIDE = 10 units";
    std::cout << std::endl;
    grid_single(10);
    std::cout << std::endl << std::endl;
    std::cout << "GRID" << std::endl << "DOUBLE LINE" << std::endl << "SIDE = 10 units";
    std::cout << std::endl;
    grid_double(10);
}
