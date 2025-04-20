#include <iostream>
using namespace std;

int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "enter the position (n) to find the fibonacci number: ";
    cin >> n;

    cout << "fibonacci number at position " << n << " is: " << fibonacci(n) << endl;

    return 0;
}
