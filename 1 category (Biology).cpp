#include <iostream>
#include <string>
using namespace std;


int main() {

    cout <<"*          1 CATEGORY           *" << endl;
    cout <<"*          (Biology)            *" << endl;

	string questions[] = 	{
        " 1. What color is chlorophyll?",
        " 2. What is the process by which a plant produces glucose and oxygen called?",
        " 3. Which organ controls thinking?",
        " 4. What is the basic building block of proteins?",
        " 5. Where is the heart located?",
        " 6. Which system in the body is responsible for transporting oxygen?",
        " 7. Which organ is responsible for producing insulin?",
        " 8. Which organ purifies the blood?",
        " 9. What helps us breathe?",
        " 10. What is the liquid part of blood called?",
        " 11. What does the special membrane contain?",
        " 12. Which of the following is NOT a type of blood vessel?",
        " 13. What helps us to sense touch?",
        " 14. What is the main organ of the respiratory system?",
        " 15. What makes up the skeleton?",
        " 16. Which organ in the human body produces bile?",
        " 17. What organ is the stomach?",
        " 18. What gives us energy?",
        " 19. What is the main role of red blood cells?",
        " 20. Which of the following is NOT an organelle in the cell?"};

	string options[][3] = 	{
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

	char answerKey[] = {'B', 'A', 'C', 'B', 'B', 'C', 'B', 'A', 'A', 'B', 'B', 'C', 'B', 'A', 'A', 'A', 'A', 'A', 'B', 'C'};

	int size = sizeof(questions)/sizeof(questions[0]);
	char guess;
	int score;

	for(int i = 0; i < size; i++){
		cout << "*******************************\n";
		cout << questions[i] << '\n';
		cout << "*******************************\n";

		for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
			cout << options[i][j] << '\n';
		}

		cin >> guess;
		guess = toupper(guess);

		if(guess == answerKey[i]){
			cout << "CORRECT\n";
			score++;
		}
		else{
			cout << "WRONG!\n";
			cout << "Answer: " << answerKey[i] << '\n';
		}
	}
	cout << "*******************************\n";
	cout << "*           RESULTS           *\n";
	cout << "*******************************\n";
	cout << "CORRECT GUESSES: " << score << '\n';
	cout << "# of QUESTIONS: " << size << '\n';
	cout << "SCORE: " << (score/(double)size)*100 << "%";
 
    return 0;
}