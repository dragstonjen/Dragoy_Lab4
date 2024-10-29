#include <iostream>
#include <windows.h>
#include <string>
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int SIZE = 20;
    int arr[SIZE];
    for (int x = 0; x < SIZE; x++) {
        arr[x] = x + 1;
    }
    int sum1 = 0;
    for (int x = 0; x < SIZE / 2; x++) {
        sum1 += arr[x];
    }
    int sum2 = 0;
    for (int x = SIZE / 2; x < SIZE; x++) {
        sum2 += arr[x];
    }
    int difference = sum1 - sum2;
    cout << "Сума першої половини: " << sum1 << endl;
    cout << "Сума другої половини: " << sum2 << endl;
    cout << "Різниця між сумами: " << difference << endl;
    return 0;
}
