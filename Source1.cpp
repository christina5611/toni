#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;


using namespace std;
int main() {
	const int MAX_WRONG = 8;
	vector<string> words;

	words.push_back("GUESS ");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];
	int wrong = 0;
	string soFar(THE_WORD.size(), '-');
	string used = "";

	cout << "welcome to hangman. Good luck!\n";

}