#include "FBullCowGame.h"


FBullCowGame::FBullCowGame()
{
	Reset();

}


void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	constexpr int32 MY_CURRENT_TRY = 1;
	const FString HIDDEN_WORD = "planet";

	MyHiddenWord = HIDDEN_WORD;

	MyMaxTries = MAX_TRIES;
	MyCurrentTry = MY_CURRENT_TRY;
	return;
}

int32 FBullCowGame::GetMaxTries() const
{
	return MyMaxTries;
}

int32 FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

int32 FBullCowGame::GetHiddenWordLength() const
{
	return MyHiddenWord.length();
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

EWordStatus FBullCowGame::CheckGuessValidity(FString) const
{
	return EWordStatus::OK;
}

FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
	MyCurrentTry++;

	FBullCowCount BullCowCount;
	
	int32 HiddenWordLength = MyHiddenWord.length();
	for (int32 i = 0; i < HiddenWordLength; i++) {
		for (int32 j = 0; j < HiddenWordLength; j++) {
			if (Guess[j] == MyHiddenWord[i]) {
				if (i == j) {
					BullCowCount.Bulls++;
				}
				else {
					BullCowCount.Cows++;
				}
			}
		}
	}

	return BullCowCount;
}
