#include "mario.h"
#include "plotter.h"
#include <fstream>
#include <cstdlib>

using namespace std;

bool Mario::readIn(string fileName, Pixel p[][MARIO_WIDTH]){
    ifstream file;
    string tmpstr;
    file.open(fileName.c_str());
    if(!file){
        return false;
    }
    for(int i=0;i<MARIO_HEIGHT;i++){
        for(int j=0;j<MARIO_WIDTH;j++){
            file >> tmpstr;
            if(tmpstr=="S"){
                p[i][j].content = ' ';
                p[i][j].color = black;
            }else if(tmpstr=="R"){
                p[i][j].content = SQUARE;
                p[i][j].color = red;
            }else if(tmpstr=="O"){
                p[i][j].content = SQUARE;
                p[i][j].color = grey;
            }else if(tmpstr=="W"){
                p[i][j].content = SQUARE;
                p[i][j].color = white;
            }else if(tmpstr=="K"){
                p[i][j].content = SQUARE;
                p[i][j].color = black;
            }else if(tmpstr=="B"){
                p[i][j].content = SQUARE;
                p[i][j].color = blue;
            }else if(tmpstr=="Y"){
                p[i][j].content = SQUARE;
                p[i][j].color = yellow;
            }
        }
    }
    file.close();
    return true;
}

Mario::Mario(){
    position.X = 10;
    position.Y = 10;
    readIn("Mario pixel/MARIO1.txt",stand);
    readIn("Mario pixel/MARIO2.txt",walk);
}

void Mario::draw(string s){
    Plotter p = Plotter();
    if(s=="stand"){
        for(int i=0;i<MARIO_HEIGHT;i++){
            for(int j=0;j<MARIO_WIDTH;j++){
                p.setColor(stand[i][j].color);
                p.plot(position.X+j,position.Y+i,stand[i][j].content);
            }
        }
    }else if(s=="walk"){
        for(int i=0;i<MARIO_HEIGHT;i++){
            for(int j=0;j<MARIO_WIDTH;j++){
                p.setColor(walk[i][j].color);
                p.plot(position.X+j,position.Y+i,walk[i][j].content);
            }
        }
    }
}

void Mario::jump(){
    Plotter p = Plotter();
    for(int n=0;n<JUMP_HEIGHT;n++){
        for(int i=0;i<MARIO_HEIGHT;i++){
            for(int j=0;j<MARIO_WIDTH;j++){
                p.setColor(stand[i][j].color);
                p.plot(position.X+j,position.Y+i-n,stand[i][j].content);
            }
        }
        Sleep(40);
        p.clear();
    }
    for(int n=JUMP_HEIGHT;n>0;n--){
        for(int i=0;i<MARIO_HEIGHT;i++){
            for(int j=0;j<MARIO_WIDTH;j++){
                p.setColor(stand[i][j].color);
                p.plot(position.X+j,position.Y+i-n,stand[i][j].content);
            }
        }
        Sleep(30);
        p.clear();
    }
}
