#include <iostream>
using namespace std;
int main() {
    int marks[5], total = 0;
    float avg, perc;
    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }
    avg = total / 5.0;
    perc = (total / 500.0) * 100;
    cout << "Total: " << total << "\nAverage: " << avg << "\nPercentage: " << perc;
    return 0;
}