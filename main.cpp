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
    for(int i = 0; i < 10; i++){
        cout << i + 1 << "\t"
    }
    cout << "\n";

    cout << "Torstoise";
    cout << 1231;
<<<<<<< HEAD
    cout << " ";
=======
>>>>>>> 82031272c758dea3ce37c0c736fa02747c1f8aee

    return 0;
}
