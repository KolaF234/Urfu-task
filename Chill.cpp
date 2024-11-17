#include <iostream>
#include "LinkChill.h"

using namespace std;

void chill(int arg){

    if(arg == 0){
        cout << "go chill"<< endl;
    }

    else {
        cout << "running 5 minutes"<< endl;
        cout << "Calm your breathing" << endl;
        chill(0);
    }

}
