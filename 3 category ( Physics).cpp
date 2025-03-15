#include <iostream>
#include <string>
using namespace std;


int main() {

    cout << "*          1 CATEGORY           *" << endl;
    cout << "*         (CHEMISTRY)           *" << endl;

    string questions[] = {
       " 1. What is the basic unit of length?",
        " 2. What is the basic unit of time?",
        " 3. Which physical quantity measures the number of oscillations in 1 second?",
        " 4. What is the unit of force?",
        " 5. What is the name of the force that the Earth exerts on bodies?",
        " 6. What is measured in amperes (A)?",
        " 7. What is the unit of measurement for power?",
        " 8. How is speed calculated?",
        " 9. What is the basic unit of measurement for energy?",
        " 10. What is the conversion of energy from one form to another called?",
        " 11. What is electric current?",
        " 12. Which law states that 'force equals mass times acceleration'?",
        " 13. Which device measures electric current?",
        " 14. What is measured in hertz (Hz)?",
        " 15. What is gravitational acceleration on Earth?",
        " 16. Which device measures atmospheric pressure?",
        " 17. What is the unit of measurement for pressure?",
        " 18. What is refraction?",
        " 19. What is the speed of light in a vacuum?",
        " 20. What is the main property of a magnet?" };

    string options[][3] = {
        {" A) Meter", " B) Kilogram", " C) Second"},
        {" A) Hour", " B) Second", " C) Minute"},
        {" A) Frequency", " B) Speed", " C) Time"},
        {" A) Newton (N)", " B) Joule (J)", " C) Pascal (Pa)"},
        {" A) Elastic force", " B) Gravitational force", " C) Magnetic force"},
        {" A) Voltage", " B) Current", " C) Resistance"},
        {" A) Joule (J)", " B) Newton (N)", " C) Watt (W)"},
        {" A) Distance ÷ Time", " B) Time X Distance", " C) Force X Mass"},
        {" A) Watt (W)", " B) Joule (J)", " B) Pascal (Pa)"},
        {" A) ZDiffusion", " B) Transformation", " B) Conversion"},
        {" A) Neutron motion", " B) Electron motion", " C) Proton motion"},
        {" A) Ohm's Law", " B) Newton's Second Law", " C) Pascal's Law"},
        {" A) Voltmeter", " B) Ammeter", " C) Barometer"},
        {" A) Frequency", " B) Power", " C) Time"},
        {" A) 1 m/s²", " B) 9.8 m/s²", " C) 100 m/s²"},
        {" A) Barometer", " B) Thermometer", " C) Manometer"},
        {" A) Pascal (Pa)", " B) Newton (N)", " C) Watt (W)"},
        {" A) Decomposition of light", " B) Refraction of light", " C) Reflection of light"},
        {" A) 3 X 10⁸ m/s", " B) 300 m/s", " C) 30,000 m/s"},
        {" A) It attracts metal objects", " B) It produces electricity", " C) It heats up when rubbed"}
    };

    // char answerKey[] = { 1, 2, 1, 1, 2, 2, 3, 1, 2, 3, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1 };
	char answerKey[] = {'A', 'B', 'A', 'A', 'B', 'B', 'C', 'A', 'B', 'C', 'B', 'B', 'B', 'A', 'B', 'A', 'A', 'B', 'A', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

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

    return 0;
}