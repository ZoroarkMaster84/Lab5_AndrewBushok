
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void translate()
{
    string text;
    vector<char> cipher({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    vector<char> result;
    char Uppercase;
    char UppercaseCipher;
    getline(cin, text);
    for (int i = 0; i < text.length(); i++) {
        if ((text[i] >= 65) && (text[i] <= 90)) {
            result.push_back(cipher[(text[i] - 65)]);
        }

        else if ((text[i] >= 97) && (text[i] <= 122)) {
            Uppercase = text[i] - 32;
            UppercaseCipher = cipher[Uppercase - 65];
            result.push_back(UppercaseCipher + 32);
        }

        else {
            result.push_back(text[i]);
        }
    }

    cout << "Encrypted Message: ";
    for (char n : result) {
        cout << n;
    }
}

int main()
{
    cout << "Enter a message to encrypt: ";
    translate();
}
