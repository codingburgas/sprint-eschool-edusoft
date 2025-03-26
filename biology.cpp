#include <iostream>
#include <random>

using namespace std;

double Biology() {
    system("cls");

    cout << "*          3 CATEGORY           *" << endl;
    cout << "*          (Biology)            *" << endl;

    string questions[] = {
    "What color is chlorophyll?",
    "What is the process by which a plant produces glucose and oxygen called?",
    "Which organ controls thinking?",
    "What is the basic building block of proteins?",
    "Where is the heart located?",
    "Which system in the body is responsible for transporting oxygen?",
    "Which organ is responsible for producing insulin?",
    "Which organ purifies the blood?",
    "What helps us breathe?",
    "What is the liquid part of blood called?",
    "What does the special membrane contain?",
    "Which of the following is NOT a type of blood vessel?",
    "What helps us to sense touch?",
    "What is the main organ of the respiratory system?",
    "What makes up the skeleton?",
    "Which organ in the human body produces bile?",
    "What organ is the stomach?",
    "What gives us energy?",
    "What is the main role of red blood cells?",
    "Which of the following is NOT an organelle in the cell?"
    };

    string options[][3] = {
     {" A) Red", " B) Green", " C) Blue"},
    {" A) Photosynthesis", " B) Respiration", " C) Fermentation"},
    {" A) Heart", " B) Liver", " C) Brain"},
    {" A) Glucose", " B) Amino acids", " C) Lipids"},
    {" A) In the head", " B) In the chest", " C) In the leg"},
    {" A) Digestive system", " B) Respiratory system", " C) Circulatory system"},
    {" A) Liver", " B) Pancreas", " C) Heart"},
    {" A) Kidneys", " B) Stomach", " C) Lungs"},
    {" A) Lungs", " B) Eyes", " C) Nails"},
    {" A) Lymph", " B) Plasma", " C) Hemoglobin"},
    {" A) Proteins only", " B) Lipids only", " C) Proteins and lipids"},
    {" A) Veins", " B) Arteries", " C) Alveoli"},
    {" A) Hair", " B) Skin", " C) Teeth"},
    {" A) Lungs", " B) Liver", " C) Stomach"},
    {" A) Bones", " B) Muscles", " C) Hair"},
    {" A) Liver", " B) Pancreas", " C) Kidneys"},
    {" A) Digestive", " B) Respiratory", " C) Nervous"},
    {" A) Food", " B) Water", " C) Air"},
    {"A) Protecting the body", " B) Transporting oxygen", " C) Producing hormones"},
    {" A) Nucleus", " B) Lysosome", " C) Alveolus"}
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

        cout << "*          3 CATEGORY           *" << endl;
        cout << "*          (Biology)            *" << endl;

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