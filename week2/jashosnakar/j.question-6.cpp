#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], sum[3][3], at[3][3], bt[3][3], sumt[3][3];

    cout << "enter elements of first matrix:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "enter elements of second matrix:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> b[i][j];

    cout << "\nsum of original matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            at[j][i] = a[i][j];
            bt[j][i] = b[i][j];
        }

    cout << "\ntranspose of first matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << at[i][j] << " ";
        cout << endl;
    }

    cout << "\ntranspose of second matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << bt[i][j] << " ";
        cout << endl;
    }

    cout << "\nsum of transposed matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sumt[i][j] = at[i][j] + bt[i][j];
            cout << sumt[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
