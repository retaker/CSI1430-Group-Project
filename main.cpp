#include "bin/plotter.h"
#include "bin/mario.h"
#include <wincon.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int key = getch();
    if(key==224){
        key = getch();
    }
    Mario m = Mario();
    while(1){
        if(key==75){
            m.draw("wl");
        }else if(key==77){
            m.draw("sl");
        }
        key = getch();
        if(key==224){
            key = getch();
        }
    }
    return 0;
}
