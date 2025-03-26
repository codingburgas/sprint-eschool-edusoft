#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <random>
#include <vector>
#include "loginMenu.h"
#include "testMenu.h"
#include "secondTestMenu.h"

using namespace std;

int main() {
    string username;
    string password;
    int answer = 0;
    int finalScoreP = 0;
    int finalScoreC = 0;
    int finalScoreB = 0;

    LoginMenu(username, password);

    TestMenu(username, answer, finalScoreP, finalScoreC, finalScoreB);

    secondTestMenu(username, answer, finalScoreP, finalScoreC, finalScoreB, password);

}