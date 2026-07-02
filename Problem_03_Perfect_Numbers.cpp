#include <iostream>
using namespace std;

enum  enDivisionStatus {
    Divides,
    DoesNotDivide
};

int readNumber() {
    int num;
    do {
        cout << "Please enter a positive number: ";
        cin >> num;

        if (num <= 0) {
            cout << "Invalid input! The number must be greater than 0." << endl;
        }
    } while (num <= 0);

    return num;
}

DivisionStatus checkDivision(int n, int m) {
    if (n % m == 0) {
        return DivisionStatus::Divides;
    }
    else {
        return DivisionStatus::DoesNotDivide;
    }
}

int calculateSum(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (checkDivision(num, i) == DivisionStatus::Divides) {
            sum += i;
        }
    }
    return sum;
}

void printResult(int num, int sum) {
    if (num == sum) {
        cout << "The number is Perfect" << endl;
    }
    else {
        cout << "The number is Not Perfect" << endl;
    }
}

int main() {
    int number = readNumber();
    int totalSum = calculateSum(number);
    printResult(number, totalSum);

    return 0;
}
