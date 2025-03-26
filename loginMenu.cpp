#include <iostream>
#include <string>
#include "register.h"

using namespace std;

void LoginMenu(string username, string password) {

    int choice;
    const char* filename = "Rating.dat";

    cout << "Select a choice!" << endl;
    cout << "1: Register || 2: Login" << endl;
    cout << "Your choice :: ";

    cin >> choice;

    if (choice != 1 && choice != 2) {
        system("cls");
        cout << "Error, wrong input!" << endl;
        exit(0);
    }
    else {
        Register(choice, username, password);
    }

    system("cls");
}