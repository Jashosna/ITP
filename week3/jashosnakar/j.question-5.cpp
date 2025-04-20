#include <iostream>
using namespace std;
int main() {
    string s;
    int alpha = 0, digit = 0, special = 0;
    cout << "Enter a string: ";
    getline(cin, s);
    for (char c : s) {
        if (isalpha(c)) alpha++;
        else if (isdigit(c)) digit++;
        else special++;
    }
    cout << "Alphabets: " << alpha << ", Digits: " << digit << ", Special chars: " << special;
    return 0;
}
