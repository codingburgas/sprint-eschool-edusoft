#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool LoggingIn(string& username) {
    string password, user, pass;

    system("cls");

    cout << "Enter Username :: ";
    cin >> username;

    cout << endl;

    cout << "Enter Password :: ";
    cin >> password;

    ifstream read(username + ".txt");
    getline(read, user);
    getline(read, pass);

    if (user == username && pass == password) {
        return true;
    }
    else {
        return false;
    }
}