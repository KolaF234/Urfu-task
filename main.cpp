#include <iostream>
#include "LinkWakeUp.h"
#include "LinkGym.h"
#include "LinkUniversity.h"
using namespace std;

int main()
{
    string answer;
    //cout << "Hello world!" << endl;
    wakeUp();
    cout << "where are you going" << endl;
    cout << "1 - go to gym"<< endl;
    cout << "2 - go to university"<< endl;

    cin >> answer;

    if(answer == "1"){
        Gym();
    }

    else{
        university();
    }

    //cout << "Go to gym" << endl;

    return 0;
}