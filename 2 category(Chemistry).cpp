#include <iostream>
#include <string>
using namespace std;


int main() {

    cout << "*          1 CATEGORY           *" << endl;
    cout << "*         (CHEMISTRY)           *" << endl;

    string questions[] = {
        " 1. What is the chemical symbol for oxygen?",
        " 2. What is the chemical formula for water?",
        " 3. Which gas supports combustion?",
        " 4. What charge does an electron have?",
        " 5. What is a chemical compound?",
        " 6. What is a molecule?",
        " 7. Which chemical element is essential in organic compounds?",
        " 8. What is the pH of pure water?",
        " 9. Which of the following elements is a noble gas?",
        " 10. What is valency?",
        " 11. Which chemical bond is the strongest?",
        " 12. What is the chemical symbol for sodium?",
        " 13. What is the process of a liquid changing into a gas called?",
        " 14. What is the most abundant element in the universe?",
        " 15.What is a catalyst?",
        " 16. What is the chemical composition of table salt?",
        " 17. What is the process of decomposition of substances under the influence of electricity called?",
        " 18. What is an allotropic form of carbon?",
        " 19. What is combustion?",
        " 20. What is the chemical symbol for iron?" };

    string options[][3] = {
        {" А) O", " B) K", " B) C"},
        {" A) CO₂", " B) H₂O", " C) NaCl"},
        {" A) Nitrogen", " B) Carbon dioxide", " C) Oxygen"},
        {" A) Positive", " B) Negative", " C) Neutral"},
        {" A) A substance made up of two or more elements", " B) A pure chemical element", " C) A mechanical mixture"},
        {" A) The smallest particle of a substance that retains its properties", " B) A single atom", " C) A metal ion"},
        {" A) Hydrogen", " B) Oxygen", " C) Carbon"},
        {" A) 0", " B) 7", " C) 14"},
        {" A) Helium", " B) Chlorine", " C) Calcium"},
        {" A) The number of protons in an atom", "  B) The ability of atoms to form chemical bonds", " C) The amount of energy in a molecule"},
        {" A) Ionic", " B) Hydrogen", " C) Covalent"},
        {" A) N", " B) Na", " C) Ne"},
        {" A) Freezing", " B) Evaporation", " C) Condensation"},
        {" A) Carbon", " B) Hydrogen", " C) Oxygen"},
        {" A) A substance that slows down chemical reactions", " B) A substance that accelerates chemical reactions", " C) A substance that does not participate in chemical reactions"},
        {" A) NaCl", " B) HCl", " C) CO₂"},
        {" A) Distillation", " B) Electrolysis", " C) Fermentation"},
        {" A) Different types of carbon compounds", " B) Different structural forms of elemental carbon", " C) A solution of carbon in water"},
        {" A) Slow reaction with release of heat", " B) Oxidation reaction with release of heat and light", " C) Process in which the amount of oxygen is reduced"},
        {" A) J", " B) Fe", " C) Ir"}
    };

    // char answerKey[] = { 'A', 'B', 'C', 'B','A', 'A', 'C','B','A', 'B', 'C', 'B', 'B', 'B', 'B', 'A', 'B', 'B', 'B', 'B' };
	char answerKey[] = {'A', 'B', 'C', 'B', 'A', 'A', 'C', 'B', 'A', 'B', 'C', 'B', 'B', 'B', 'B', 'A', 'B', 'B', 'B', 'B'};

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