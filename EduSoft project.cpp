#include <iostream>
#include <fstream>
#include <string>
#include "raylib/raylib/include/raylib.h"

using namespace std;


bool LoggingIn() {
	string username, password, user, pass;

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

bool Login(string& username, string& password) {
	bool status = LoggingIn();

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

void Register(int choice, string& username, string& password) {

	if (choice == 1) {
		system("cls");

		cout << "Select a username :: ";
		cin >> username;

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

int main() {
	string username;
	string password;
	int choice;

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

	
		
}

