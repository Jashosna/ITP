#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index = 0) {
    if (index == size) {
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements are: ";
    printArray(arr, size);

    return 0;
}
