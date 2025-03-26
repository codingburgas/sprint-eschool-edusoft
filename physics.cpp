#include <iostream>
#include <random>

using namespace std;

double Physics() {
    system("cls");

    cout << "*          1 CATEGORY           *" << endl;
    cout << "*          (Physics)            *" << endl;

    string questions[] = {
        "What is the basic unit of length?",
        "What is the basic unit of time?",
        "Which physical quantity measures the number of oscillations in 1 second?",
        "What is the unit of force?",
        "What is the name of the force that the Earth exerts on bodies?",
        "What is measured in amperes (A)?",
        "What is the unit of measurement for power?",
        "How is speed calculated?",
        "What is the basic unit of measurement for energy?",
        "What is the conversion of energy from one form to another called?",
        "What is electric current?",
        "Which law states that 'force equals mass times acceleration'?",
        "Which device measures electric current?",
        "What is measured in hertz (Hz)?",
        "What is gravitational acceleration on Earth?",
        "Which device measures atmospheric pressure?",
        "What is the unit of measurement for pressure?",
        "What is refraction?",
        "What is the speed of light in a vacuum?",
        "What is the main property of a magnet?"
    };

    string options[][3] = {
        {"A) Meter", "B) Kilogram", "C) Second"},
        {"A) Hour", "B) Second", "C) Minute"},
        {"A) Frequency", "B) Speed", "C) Time"},
        {"A) Newton (N)", "B) Joule (J)", "C) Pascal (Pa)"},
        {"A) Elastic force", "B) Gravitational force", "C) Magnetic force"},
        {"A) Voltage", "B) Current", "C) Resistance"},
        {"A) Joule (J)", "B) Newton (N)", "C) Watt (W)"},
        {"A) Distance ÷ Time", "B) Time X Distance", "C) Force X Mass"},
        {"A) Watt (W)", "B) Joule (J)", "C) Pascal (Pa)"},
        {"A) Diffusion", "B) Transformation", "C) Conversion"},
        {"A) Neutron motion", "B) Electron motion", "C) Proton motion"},
        {"A) Ohm's Law", "B) Newton's Second Law", "C) Pascal's Law"},
        {"A) Voltmeter", "B) Ammeter", "C) Barometer"},
        {"A) Frequency", "B) Power", "C) Time"},
        {"A) 1 m/s²", "B) 9.8 m/s²", "C) 100 m/s²"},
        {"A) Barometer", "B) Thermometer", "C) Manometer"},
        {"A) Pascal (Pa)", "B) Newton (N)", "C) Watt (W)"},
        {"A) Decomposition of light", "B) Refraction of light", "C) Reflection of light"},
        {"A) 3 X 10? m/s", "B) 300 m/s", "C) 30,000 m/s"},
        {"A) It attracts metal objects", "B) It produces electricity", "C) It heats up when rubbed"}
    };

    char answerKey[] = { 'A', 'B', 'A', 'A', 'B', 'B', 'C', 'A', 'B', 'C',
                        'B', 'B', 'B', 'A', 'B', 'A', 'A', 'B', 'A', 'A' };

    int indices[20];
    for (int i = 0; i < 20; i++) {
        indices[i] = i;
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(indices, indices + 20, g);

    char guess;
    int score = 0;

    for (int i = 0; i < 20; i++) {
        int qIndex = indices[i];

        cout << "*******************************\n";
        cout << questions[qIndex] << '\n';
        cout << "*******************************\n";

        for (int j = 0; j < 3; j++) {
            cout << options[qIndex][j] << '\n';
        }

        cin >> guess;
        system("cls");
        guess = toupper(guess);

        cout << "*          1 CATEGORY           *" << endl;
        cout << "*          (Physics)            *" << endl;

        if (guess == answerKey[qIndex]) {
            cout << "CORRECT\n";
            score++;
        }
        else {
            cout << "WRONG!\n";
            cout << "Answer: " << answerKey[qIndex] << '\n';
        }
    }

    system("cls");

    cout << "*******************************\n";
    cout << "*           RESULTS           *\n";
    cout << "*******************************\n";
    cout << "CORRECT GUESSES: " << score << '\n';
    cout << "# of QUESTIONS: 20\n";
    cout << "SCORE: " << (score / 20.0) * 100 << "%\n";

    return (score / 20.0) * 100;
}