#include "physicsExam.h"

void physicsExam() {
    cout << "*          1 CATEGORY           *" << endl;
    cout << "*            (PHYSICS)           *" << endl;

    string questions[] = {
        " 1. What is the unit of force?",
        " 2. What is the formula for Newton's second law?",
        " 3. What is the speed of light?",
        " 4. What is the center of an atom called?",
        " 5. What is the SI unit of energy?",
        " 6. Who discovered the law of gravity?",
        " 7. What is the unit of electric current?",
        " 8. What is the gravitational force between two masses called?",
        " 9. What is the SI unit of power?",
        " 10. What is the speed of sound in air?",
        " 11. Which of the following is NOT a type of wave?",
        " 12. What is the total resistance in a series circuit?",
        " 13. Who is known as the father of modern physics?",
        " 14. What is the fundamental force responsible for radioactivity?",
        " 15. What is the formula for work done?",
        " 16. What is the unit of temperature?",
        " 17. What does the second law of thermodynamics deal with?",
        " 18. What is Ohm's law?",
        " 19. What is the principle behind a lever?",
        " 20. What is the primary unit of mass?"
    };

    string options[][3] = {
        {" A) Newton", " B) Joule", " C) Watt"},
        {" A) F = ma", " B) F = m/g", " C) E = mc²"},
        {" A) 3 x 10^8 m/s", " B) 2 x 10^6 m/s", " C) 1 x 10^3 m/s"},
        {" A) Nucleus", " B) Proton", " C) Neutron"},
        {" A) Watt", " B) Joule", " C) Newton"},
        {" A) Einstein", " B) Newton", " C) Galileo"},
        {" A) Ampere", " B) Volt", " C) Watt"},
        {" A) Coulomb", " B) Newton", " C) Gravitational force"},
        {" A) Ampere", " B) Watt", " C) Joule"},
        {" A) 340 m/s", " B) 330 m/s", " C) 300 m/s"},
        {" A) Radioactive", " B) Longitudinal", " C) Mechanical"},
        {" A) Additive", " B) Subtractive", " C) Same as parallel"},
        {" A) Einstein", " B) Newton", " C) Faraday"},
        {" A) Electromagnetic force", " B) Gravitational force", " C) Nuclear force"},
        {" A) W = Fd", " B) W = mgh", " C) W = mv²"},
        {" A) Celsius", " B) Kelvin", " C) Fahrenheit"},
        {" A) Energy conservation", " B) Entropy increase", " C) Energy transformation"},
        {" A) V = IR", " B) F = ma", " C) P = IV"},
        {" A) Force equals lever arm times load", " B) Lever law of equilibrium", " C) Mechanical advantage of levers"},
        {" A) Kilogram", " B) Pound", " C) Gram"}
    };

    char answerKey[] = { 'A', 'A', 'A', 'A', 'B', 'B', 'A', 'B', 'B', 'A', 'C', 'A', 'B', 'C', 'A', 'B', 'B', 'A', 'B', 'A' };

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        cout << "*******************************\n";
        cout << questions[i] << '\n';
        cout << "*******************************\n";
        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
            cout << options[i][j] << '\n';
        }
        cin >> guess;
        guess = toupper(guess);
        if (guess == answerKey[i]) {
            cout << "CORRECT\n";
            score++;
        }
        else {
            cout << "WRONG!\n";
            cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    cout << "*******************************\n";
    cout << "*           RESULTS           *\n";
    cout << "*******************************\n";
    cout << "CORRECT GUESSES: " << score << '\n';
    cout << "# of QUESTIONS: " << size << '\n';
    cout << "SCORE: " << (score / (double)size) * 100 << "%";
}

