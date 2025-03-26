#include <iostream>
#include <random>

using namespace std;

double Chemistry() {
    system("cls");

    cout << "*          2 CATEGORY           *" << endl;
    cout << "*          (Chemistry)          *" << endl;

    string questions[] = {
        "What is the chemical symbol for water ? ",
        "What is the most abundant gas in Earth's atmosphere?",
        "What is the chemical formula for table salt?",
        "What is the atomic number of oxygen?",
        "What is the main gas responsible for the greenhouse effect?",
        "What is the chemical symbol for gold?",
        "What is the pH of pure water?",
        "What is the main component of natural gas?",
        "What is the lightest element?",
        "What is the chemical formula of carbon dioxide?",
        "What is the process of a liquid turning into a gas called?",
        "What is the hardest naturally occurring substance?",
        "What is the chemical formula of ammonia?",
        "What type of bond is formed when electrons are shared between atoms?",
        "What is the name of the process by which plants produce oxygen?",
        "What is the chemical symbol for sodium?",
        "What is the most common element in the universe?",
        "What is the main acid in lemon juice?",
        "What is the chemical formula of methane?",
        "What type of reaction occurs when two substances combine to form a more complex substance?"
    };

    string options[][3] = {
        {" A) H2O", " B) O2", " C) CO2"},
        {" A) Oxygen", " B) Nitrogen", " C) Carbon dioxide"},
        {" A) NaCl", " B) KCl", " C) CaCl2"},
        {" A) 6", " B) 8", " C) 10"},
        {" A) Carbon dioxide", " B) Methane", " C) Oxygen"},
        {" A) Au", " B) Ag", " C) Pb"},
        {" A) 7", " B) 5", " C) 9"},
        {" A) Methane", " B) Oxygen", " C) Hydrogen"},
        {" A) Oxygen", " B) Hydrogen", " C) Helium"},
        {" A) CO", " B) CO2", " C) C2O3"},
        {" A) Evaporation", " B) Condensation", " C) Sublimation"},
        {" A) Graphite", " B) Diamond", " C) Quartz"},
        {" A) NH3", " B) CH4", " C) HNO3"},
        {" A) Ionic", " B) Covalent", " C) Metallic"},
        {" A) Respiration", " B) Photosynthesis", " C) Fermentation"},
        {" A) S", " B) Na", " C) Cl"},
        {" A) Hydrogen", " B) Helium", " C) Oxygen"},
        {" A) Sulfuric acid", " B) Citric acid", " C) Acetic acid"},
        {" A) CH4", " B) C2H6", " C) C3H8"},
        {" A) Decomposition", " B) Synthesis", " C) Combustion"}
    };

    char answerKey[] = { 'A', 'B', 'A', 'B', 'A', 'A', 'A', 'A', 'B', 'B', 'A', 'B', 'A', 'B', 'B', 'B', 'A', 'B', 'A', 'B' };

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    vector<int> indices(size);
    for (int i = 0; i < size; i++) {
        indices[i] = i;
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(indices.begin(), indices.end(), g);

    for (int i = 0; i < size; i++) {
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

        cout << "*          2 CATEGORY           *" << endl;
        cout << "*          (Chemistry)          *" << endl;

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
    cout << "# of QUESTIONS: " << size << '\n';
    cout << "SCORE: " << (score / (double)size) * 100 << "%\n";

    return (score / (double)size) * 100;
}