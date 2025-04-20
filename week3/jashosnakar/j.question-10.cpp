#include <iostream>
#include <algorithm> // For std::remove
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to remove: ";
    cin >> ch;

    // Use remove-erase idiom
    str.erase(remove(str.begin(), str.end(), ch), str.end());

    cout << "String after removal: " << str << endl;

    return 0;
}
