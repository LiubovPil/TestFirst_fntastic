// StringConverter.cpp : Test task for Fntastic completed by Liubov Piliagina

#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

string ConvertString(string& word) {
    map<char, int> char_counter;

    for (char& c : word) {
        c = tolower(c);
        if (char_counter.count(c) == 0)
            char_counter[c] = 1;
        else
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

