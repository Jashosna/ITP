#include <iostream>
using namespace std;
bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if (isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
    return 0;
}
