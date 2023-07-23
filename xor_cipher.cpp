#include <iostream>
using namespace std;

void apply_cipher(string text, int key) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = text[i] ^ key;
    }
    cout << "OUTPUT: " << text;
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    int key;
    cout << "Enter key: ";
    cin >> key;
    apply_cipher(text, key);
    return 0;
}