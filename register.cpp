#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include "loginMenu.h"
#include "login.h"

using namespace std;

void Register(int choice, string& username, string& password) {

    if (choice == 1) {
        system("cls");

        while (true) {
            cout << "Select a username :: ";
            cin >> username;
            system("cls");

            ifstream fileCheck(username + ".txt");
            if (fileCheck) {
                cout << "Error: Username already taken. Please choose a different one." << endl;
            }
            else {
                break;
            }
        }

        cout << "Select a password :: ";
        cin >> password;

        ofstream file;
        file.open(username + ".txt");
        file << username << endl << password;
        file.close();

        cout << "Registration successful!" << endl;
    }

    else if (choice == 2) {
        Login(username, password);
    }
}