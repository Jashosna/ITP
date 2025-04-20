#include <iostream>
using namespace std;
int main() {
    float cm, m, km;
    cout << "Enter length in cm: ";
    cin >> cm;
    m = cm / 100;
    km = cm / 100000;
    cout << "Meters: " << m << "\nKilometers: " << km;
    return 0;
}