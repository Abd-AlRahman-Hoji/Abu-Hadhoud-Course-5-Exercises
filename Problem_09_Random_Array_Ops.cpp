#include <iostream>   
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int SumArray(int arr[100], int arrLength)
{
    int Sum = 0;

    for (int i = 0; i < arrLength; i++)
    {
        Sum += arr[i];
    }

    return Sum;
}

float ArrayAverage(int arr[100], int arrLength)
{
    return (float)SumArray(arr, arrLength) / arrLength;
}

int MaxNumberInArray(int arr[100], int arrLength)
{
    int Max = arr[0];

    for (int i = 1; i < arrLength; i++)
    {
        if (arr[i] > Max)
            Max = arr[i];
    }

    return Max;
}

int MinNumberInArray(int arr[100], int arrLength)
{
    int Min = arr[0];

    for (int i = 1; i < arrLength; i++)
    {
        if (arr[i] < Min)
            Min = arr[i];
    }

    return Min;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nAverage of all numbers is : " << ArrayAverage(arr, arrLength) << endl;
    cout << "Max number is : " << MaxNumberInArray(arr, arrLength) << endl;
    cout << "Min number is : " << MinNumberInArray(arr, arrLength) << endl;

    return 0;
}