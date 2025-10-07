#include <iostream>
using namespace std;

int main() {
    string text;
    char key;
    cout << "Enter text: "; cin.ignore(); getline(cin, text);
    cout << "Enter key char: "; cin >> key;

    cout << "\nOriginal ASCII: ";
    for(char c: text) cout << int(c) << " "; 

    // Caesar cipher
    string caesar = text;
    for(char &c: caesar) c += key;

    cout << "\nCaesar ASCII: ";
    for(char c: caesar) cout << int(c) << " ";

    // XOR encryption
    string xortext = text;
    for(char &c: xortext) c ^= key;

    cout << "\nXOR ASCII: ";
    for(char c: xortext) cout << int(c) << " ";
    cout << endl;
}

