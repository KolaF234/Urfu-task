#include <iostream>
#include "LinkChill.h"
using namespace std;


void pairs(int arg){
    for(int i = 1; i <= arg; i++){

        cout << "I studed " << i << " pair"<< endl;
    }
}

void university(){
    string answer;
    int tryn;
    cout << "select notebook" << endl;
    cout <<"Hom many pairs I will suding (1 or 2 or ..)" << endl;

    cin >> tryn;

    pairs(tryn);

    cout << "Go to english? (Y/N)"<< endl;

    cin >> answer;

    if(answer == "Y" || answer == "y"){
        cout << "I learned English"<< endl;
    }
    chill(0);
}
