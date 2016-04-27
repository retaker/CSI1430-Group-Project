#include "bin/plotter.h"
#include "bin/mario.h"
#include <wincon.h>
#include <iostream>

using namespace std;

int main(){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i=0x00;i<=0x0F;i++){
      SetConsoleTextAttribute(h, i);
      cout << SQUARE;
    }

    return 0;
}
