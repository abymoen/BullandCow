#include  <iostream>     //angular brackets for standard libraries
						 //double quotes for your own code import	
#include <string>		//used to allow functions working on a string (cin >> "StringName")
#include "Header.h"		//should have called main.h (it is a header for main)



int main() {
	printIntro();
	playGame();
	askToPlayAgain();
	return 0;			//exit application
}

void printIntro() {
	constexpr int WORD_LENGTH = 5;
	//intro the game to the user
	cout << "Welcome to Bulls and Cows, a fun word game!\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";
	return;
}

void playGame() {
	//loop until the user enters "bye" to end the game
	bool loop = true;
	while (loop) {
		loop = userGuess();
	}
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
	//check to see what the guess was
	//if it is the word bye, end the game by returning false
	//else repeat the guess back to the user
	if (Guess == "bye") {
		cout << "You have ended the game\n\n";
		return false;
	}
	cout << "You have guessed '" << Guess << "'\n\n";
	return true;
}

void askToPlayAgain() {
	cout << "Would you like to play again?\n";
	cout << "Enter 'yes' for yes and 'no' for no: ";
	string replay = "";
	getline(cin, replay);
	if (replay == "yes") {
		cout << "Playing again!\n\n";
		playGame();						//call the playGame function to restart
	}
	if (replay == "no") {
		cout << "Exiting game\n";		//go back to main to return 0 and exit
		return;
	}

	cout << "Answer not recognized\n\n";	
	askToPlayAgain();				//re-ask the user
	
}