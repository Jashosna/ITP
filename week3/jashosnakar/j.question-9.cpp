#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    for (char &c : s) {
        if (c >= 'A' && c <= 'Z') c = c + 32;
    }
    cout << "Lowercase: " << s;
    return 0;
}