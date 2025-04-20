#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if(n < 2) {
        cout << "Array should have at least two elements." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " distinct elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize first and second
    int first, second;

    if(arr[0] < arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for(int i = 2; i < n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    cout << "The second smallest element is: " << second << endl;

    return 0;
}
