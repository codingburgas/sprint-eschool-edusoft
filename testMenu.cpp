#include <iostream>
#include <string>
#include "physics.h"
#include "chemistry.h"
#include "biology.h"
#include "userScore.h"

using namespace std;

void TestMenu(string username, int answer, int finalScoreP, int finalScoreC, int finalScoreB) {
    cout << "Now select what category do you want to start from :: " << endl;
    cout << "1) Physics" << endl;
    cout << "2) Chemistry" << endl;
    cout << "3) Biology" << endl;

    userScore userForRating;

    while (true) {
        cin >> answer;

        if (answer == 1) {
            finalScoreP = Physics();

            userForRating.scoreProcent_Physics = finalScoreP;
            userForRating.userlogin = username;
            break;
        }

        else if (answer == 2) {
            finalScoreC = Chemistry();

            userForRating.scoreProcent_Chemistry = finalScoreC;
            userForRating.userlogin = username;
            break;
        }

        else if (answer == 3) {
            finalScoreB = Biology();

            userForRating.scoreProcent_Biology = finalScoreB;
            userForRating.userlogin = username;
            break;
        }

        else {
            cout << "Wrong input, try again";
            cin >> answer;
        }
    }
}