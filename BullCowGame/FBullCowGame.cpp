#include "FBullCowGame.h"


FBullCowGame::FBullCowGame()
{
	Reset();

}


void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	constexpr int MY_CURRENT_TRY = 1;
	MyMaxTries = MAX_TRIES;
	MyCurrentTry = MY_CURRENT_TRY;
	return;
}

int FBullCowGame::GetMaxTries() const
{
	return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
