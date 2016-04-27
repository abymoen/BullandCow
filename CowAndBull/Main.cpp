#include  <iostream>     //angular brackets for standard libraries
						 //double quotes for your own code import	
using namespace std;	//this allows you to not have to write std:: before every cout

int main() {
	constexpr int WORD_LENGTH = 5;

	cout << "Welcome to Bulls and Cows, a fun word game\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";

	return 0;
}