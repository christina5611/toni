#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;

string GetUserName();
void Introduction(string UserName);
vector<string> words;
int main()
{


    // Display Title of the program to the user
    cout << "\n\nKeywords II\n\n\t\t";
    // Ask the recruit to log in using their name
     // Hold the recruit's name in a var, and address them by it throughout the simulation.
    string userName;
    userName = GetUserName();
    Introduction(userName);
    // Display an overview of what Keywords II is to the recruit 
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
    cout << "\n\nKeywords II\n\n\t\t";
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "You have used the following letters:\n" << used << endl;
        cout << "\nSo far, the word is:\n " << soFar << endl;
    }
    char guess;
    cout << "\n\nEnter your guess: ";
    cin >> guess;
    guess = toupper(guess);
    while (used.find(guess) != string::npos)
    {
        cout << "\n You've already guessed " << guess << endl;
        cout << "Enter your guess:";
        cin >> guess;
        guess = toupper(guess);
    }
    used += guess;
    if (THE_WORD.find(guess) != string::npos)
    {
        cout << "Thats right!" << guess << "is in the word\n";
        for (int i = 0; i < THE_WORD.length(); ++i)
        {
            if (THE_WORD[i] == guess)
            {
                soFar[i] = guess;
            }
        }
    }
    else
    {
        cout << "Sorry," << guess << "isnt in the word.\n";
        ++wrong;
    }


if (wrong == MAX_WRONG)
{
    cout << "you've been hanged!";
}
else
{
    cout << "\nyou guessed it!";
}
cout << "\nthe word was" << THE_WORD << endl;
// Display directions to the recruit on how to use Keywords

// Create a collection of 10 words you had written down manually
// Create an int var to count the number of simulations being run starting at 1
// Display the simulation # is starting to the recruit. 
// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 

// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
//     Tell recruit how many incorrect guesses he or she has left
//     Show recruit the letters he or she has guessed
//     Show player how much of the secret word he or she has guessed
//     Get recruit's next guess
//     While recruit has entered a letter that he or she has already guessed
//          Get recruit ’s guess
//     Add the new guess to the group of used letters
//     If the guess is in the secret word
//          Tell the recruit the guess is correct
//          Update the word guessed so far with the new letter
//     Otherwise
//          Tell the recruit the guess is incorrect
//          Increment the number of incorrect guesses the recruit has made
// If the recruit has made too many incorrect guesses
//     Tell the recruit that he or she has failed the Keywords II course.
// Otherwise
//     Congratulate the recruit on guessing the secret words
// Ask the recruit if they would like to run the simulation again
// If the recruit wants to run the simulation again
//     Increment the number of simulations ran counter
//     Move program execution back up to // Display the simulation # is starting to the recruit. 
// Otherwise 
//     Display End of Simulations to the recruit
//     Pause the Simulation with press any key to continue
return 0;
}
string GetUserName()
{
    string userName;
    cout << "\n Input player name: ";
    getline(cin, userName);
    return userName;
}
void Introduction(string userName) 
{
    cout << userName << " I want some coffee.\n ";
    return ;
}
