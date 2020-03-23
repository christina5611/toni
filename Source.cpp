#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cctype>

using namespace std;

string GetUserName();

int main()
{
	cout << "\nWelcome to hangman!\n\n";
	string userName;
	userName = GetUserName();
	

	const int WRONG_MAX = 5;
	vector<string> words;
	words.push_back("STRING");
	words.push_back("COUT");
	words.push_back("SWITCH");
	words.push_back("FOR");
	words.push_back("CHAR");
	words.push_back("BREAK");
	words.push_back("CIN"); 
	words.push_back("INTEGER");
	words.push_back("WHILE");
	words.push_back("CONST");
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	

	for (int i = 0; i < 3; i++)

	{

		cout << "\nWelcome to round " << i + 1 << " of 3.\n\n";

	}



	const string WORD_TO_GUESS = words[0];
	string soFar(WORD_TO_GUESS.size(), '-');
	string usedLetters = "";
	int wrong = 0;
	
	while ((wrong < WRONG_MAX) && (soFar != WORD_TO_GUESS))
	{
		cout << userName << " has " << (WRONG_MAX - wrong) << " guesses.\n";
		cout << "\nYou've used this letters: " << usedLetters << endl;
		cout << "\nSo far, the word looks like this:\n" << soFar << endl;

		char guess;
		cout << userName << " enter your guess: ";
		cin >> guess;
		guess = toupper(guess);

		while (usedLetters.find(guess) != string::npos)
		{
			cout << "\nYou've alreaady guessed " << guess << endl;
			cout << "your guess: ";
			cin >> guess;
			guess = toupper(guess);
		}

		usedLetters += guess;
		if (WORD_TO_GUESS.find(guess) != string::npos)
		{
			cout << "Thats it!" << guess << "is in the word!\n";
			for (int i = 0; i < WORD_TO_GUESS.length(); i++)
			{
				if (WORD_TO_GUESS[i] == guess)
				{
					soFar[i] = guess;
				}
				
			}
			if (wrong == WRONG_MAX)
			{
				cout << "\n\nGame over, mate. You've been hanged!";

			}
			else
			{
				cout << "\n\n You've guessed it!";
			}
			cout << "\n\nThe word was:" << WORD_TO_GUESS << endl;
			cout << "\n\n ";
		}
	}
		system("PAUSE");
		return EXIT_SUCCESS;
	

}
string GetUserName()

{

	//create string to hold user name

	string userName;

	//user input of user name

	cout << "\n\n Enter player name: ";

	//get user name from system

	getline(cin, userName);

	//return name

	return userName;

}
