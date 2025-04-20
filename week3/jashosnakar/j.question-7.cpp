#include <iostream>
using namespace std;
void rotateRight(int arr[], int n, int k) {
    k = k % n;
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}