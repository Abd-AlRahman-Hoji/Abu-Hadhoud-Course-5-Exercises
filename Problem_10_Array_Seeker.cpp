#include <iostream>   
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

void PrintResultByPosition(short NumberPosition)
{
    if (NumberPosition == -1)
        cout << "The number is not found :-(\n";
    else
    {
        cout << "The number found at position: " << NumberPosition << endl;
        cout << "The number found its order  : " << NumberPosition + 1 << endl;
    }
}

short ProcessSearch(int arr[100], int arrLength)
{
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;

    cout << "\nNumber you are looking for is: " << Number << endl;

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    PrintResultByPosition(ProcessSearch(arr, arrLength));

    return 0;
}