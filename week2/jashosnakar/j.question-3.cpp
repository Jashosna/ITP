#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int original[n], copy[n];

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> original[i];
    }

    for(int i = 0; i < n; i++) {
        copy[i] = original[i];
    }

    cout << "Elements in the copied array are: ";
    for(int i = 0; i < n; i++) {
        cout << copy[i] << " ";
    }

    return 0;
}
