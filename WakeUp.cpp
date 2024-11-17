#include <iostream>
#include "LinkWakeUp.h"
using namespace std;

void wakeUp(){
    string answer;
    cout << "The alarm clock rings. WakeUp? Y/N"<< endl;
    cin >> answer;
    if(answer != "Y" && answer != "y"){
            wakeUp();
    }
}
