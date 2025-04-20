#include <iostream>
using namespace std;
int main() {
    string s, result;
    cout << "Enter a string: ";
    getline(cin, s);
    for (char c : s) {
        if (isalpha(c)) result += c;
    }
    cout << "Result: " << result;
    return 0;
}