#include <iostream>
#include <string>
#include "loggingIn.h"

using namespace std;

bool Login(string& username, string& password) {
    bool status = LoggingIn(username);

    if (!status) {
        system("cls");
        cout << "Incorrect Information, Please Try Again!" << endl;
        system("PAUSE");
        return false;
    }
    else {
        system("cls");
        cout << "Login Successful!" << endl;
        system("PAUSE");
        return true;
    }
}