#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();

// the entry point for our application
int main() 
{
	PrintIntro();
	string Guess = GetGuess();
	cout << "\nYou guessed: " << Guess << endl;

	// repeat the guess back to them

	return 0;
}

void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you gues the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?" << endl;
	return;
}

string GetGuess()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;

}