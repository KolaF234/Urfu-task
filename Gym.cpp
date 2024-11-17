#include <iostream>
#include "LinkGym.h"
#include "LinkChill.h"
using namespace std;

void Gym(){

    int squat;
    string answer;
    cout <<"How squat?" << endl;

    cin >> squat;

    for (int i = 1; i <= squat; i++){
        cout << "I did " << i << " squat" << endl;
    }

    cout << "Do you have energy? (Y/N)" << endl;
    cin >> answer;

    if(answer == "Y" || answer == "y"){
        chill(1);
    }

    else{
        chill(0);
    }
}
