#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void print(int val) {
    cout << val;
}

void rev(int num) {
    while (num > 0) {
        print(num % 10);
        num = num / 10;
    }
}

int main() {
    rev(ReadPositiveNumber("Please enter a positive number:"));
    cout << endl;
    return 0;
}