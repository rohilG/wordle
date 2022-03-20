#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Game Loop
    for (;;) {
        int wordLength;

        cout << "Welcome to Wordle on the terminal" << endl;

        for (;;) {
            cout << "Enter a word length (3-5): ";
            cin >> wordLength; 

            if (wordLength < 3 || wordLength > 5) {
                cout << endl << "Word length is not valid." << endl << endl;
            } else {
                break;
            }
        }

        cout << endl << "You chose a word length of " << wordLength << endl << endl;

        // Find a word of length wordLength
        string curWord = "";
        // vector<string> words;
        while (curWord.length() != wordLength) {
            
            // Get words and write them to file
            system("curl https://random-word-api.herokuapp.com/word?number=10 >> words.txt &> /dev/null");

            // Read the words through an input file stream and parse them

            //cout << "here are some words " << words << endl;
            break;
        }


        break;
    }

}
