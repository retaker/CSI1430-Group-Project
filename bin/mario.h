#ifndef MARIO_H_INCLUDED
#define MARIO_H_INCLUDED

struct Point{
    int x, y;
    Point(int a=0,int b=0){
        x = a;
        y = b;
    }
};

class Mario{
private:
    const int height, width;
    Point position;

};


#endif // MARIO_H_INCLUDED
