#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void getWordLength(int* wordLength) {
    for (;;) {
        cout << "Enter a word length (3-5): ";
        cin >> *wordLength; 

        if (*wordLength < 3 || *wordLength > 5) {
            cout << endl << "Word length is not valid." << endl << endl;
        } else {
            break;
        }
    }
}

// const string& parseWord() {}

void getWord(string* word, const int wordLength){
    while (word->length() != wordLength) {

        // Get words and write them to file
        system("curl https://random-word-api.herokuapp.com/word?number=10 >> words.txt &> /dev/null");

        string line;
        // Read the words through an input file stream and parse them
        ifstream wordFile ("words.txt");
        if (wordFile.is_open()) {
            getline(wordFile, line);
            //while ( getline (wordFile,line) ) {
            //    cout << line << '\n';
            //}
            wordFile.close();
        }

        cout << "line is " << line << endl;

        //cout << "here are some words " << words << endl;
        break;
    }
}


int main() {
    // Game Loop
    for (;;) {
        cout << "Welcome to Wordle on the terminal" << endl;

        int wordLength;
        getWordLength(&wordLength);
        cout << endl << "You chose a word length of " << wordLength << endl << endl;

        // Find a word of length wordLength
        string word = "";
        getWord(&word, wordLength);

        // Have the user play the game and guess the word

        break;
    }

}
