#include <iostream>
using namespace std;

void sortArray(int arr[], int size)
 {
    for (int i = 0; i < size - 1; i++)
     {
        for (int j = i + 1; j < size; j++)
         {
            if (arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
 {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sortArray(arr, size);  

    cout << "Sorted array in ascending order:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
