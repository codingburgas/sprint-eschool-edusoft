#include <iostream>
#include <string>
#include "testMenu.h"

using namespace std;

void secondTestMenu(string username, int answer, int finalScoreP, int finalScoreC, int finalScoreB, string password) {
    int start;

    cout << endl;
    cout << endl;

    cout << "Do you want to start a new test?" << endl;
    cout << "1) No, I don`t" << endl;
    cout << "2) Yes, I do" << endl;

    cin >> start;

    if (start == 1) {
        system("cls");
        cout << "Have a nice day!";
        exit(0);
    }
    else if (start == 2) {
        system("cls");
        TestMenu(username, answer, finalScoreP, finalScoreC, finalScoreB);
    }
    else {
        system("cls");
        cout << "Something went wrong, please, restart the program!";
        exit(0);
    }
}