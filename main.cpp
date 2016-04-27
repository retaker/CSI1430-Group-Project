#include "bin/plotter.h"
#include "bin/mario.h"
#include <wincon.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
/*
    Pixel p[16][13];
    ifstream file;
    string tmpstr;
    file.open("Mario pixel/MARIO1.txt");
    if(!file){
        cout << "ERROR" << endl;
    }
    for(int i=0;i<16;i++){
        for(int j=0;j<13;j++){
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

    Plotter m = Plotter();
    for(int i=0;i<16;i++){
        for(int j=0;j<13;j++){
            m.setColor(p[i][j].color);
            m.plot(j,i,p[i][j].content);
        }
    }

    file.close();
    */
    Mario m = Mario();
    int i=0;
    m.draw("stand");
    while(i<50){
        if(i%2==0){
            m.draw("stand");
        }else{
            m.draw("walk");
        }
        Sleep(100);
        i++;
    }
    m.jump();
    m.draw("stand");

    return 0;
}
