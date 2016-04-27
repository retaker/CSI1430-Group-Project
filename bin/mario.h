#ifndef MARIO_H_INCLUDED
#define MARIO_H_INCLUDED

#include <string>
#include "plotter.h"

using namespace std;

const int MARIO_HEIGHT = 16, MARIO_WIDTH = 13, JUMP_HEIGHT = 10;

struct Pixel{
    char content;
    ink color;
};

class Mario{
private:
    COORD position;
    Pixel stand[MARIO_HEIGHT][MARIO_WIDTH];
    Pixel walk[MARIO_HEIGHT][MARIO_WIDTH];
    bool readIn(string, Pixel p[][MARIO_WIDTH]);
public:
    Mario();
    Mario(string, string, COORD);

    void setPosition(int, int);
    COORD getPosition(int, int);

    void draw(string);
    void jump();

};


#endif // MARIO_H_INCLUDED
