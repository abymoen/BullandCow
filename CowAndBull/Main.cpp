#include  <iostream>     //angular brackets for standard libraries
						 //double quotes for your own code import	
#include <string>		//used to allow functions working on a string (cin >> "StringName")

using namespace std;	//this allows you to not have to write std:: before every cout
void printIntro();      //You must "declare" your methods at the top
bool userGuess();
bool userCheck(string);

int main() {
	bool loop = true;
	printIntro();
	while (loop) {
		loop = userGuess();
	}
	return 0;
}
void printIntro() {
	constexpr int WORD_LENGTH = 5;
	//intro the game to the user
	cout << "Welcome to Bulls and Cows, a fun word game!\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";
	return;
}
bool userGuess() {
	//get a guess from the user
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	bool loop = userCheck(Guess);
	return loop;
}

bool userCheck(string Guess) {
	if (Guess == "bye") {
		cout << "You have ended the game\n";
		return false;
	}
	cout << "You have guessed '" << Guess << "'\n\n";
	return true;
}