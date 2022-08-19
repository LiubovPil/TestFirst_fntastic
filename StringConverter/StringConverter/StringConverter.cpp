// StringConverter.cpp : Test task for Fntastic completed by Liubov Piliagina

#include <iostream>
#include <map>
#include <string>

using namespace std;

string ConvertString(string& word) {
    map<char, int> char_counter;

    for (char& c : word) {
        c = tolower(c);
        ++char_counter[c];
    }
    for (char& c : word) {
        if (char_counter.at(c) == 1)
            c = '(';
        else
            c = ')';
    }
    return word;
}

int main()
{
    cout << "Enter your word: " << endl;
    string word;

    while(getline(cin, word)) {
        cout << ConvertString(word) << endl 
            << "Enter your word: " << endl;
    }
}

