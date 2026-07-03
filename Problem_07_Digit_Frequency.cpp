
#include <iostream>
using namespace std;
long long ReadPositiveNumber(string Message)
{
    long long Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
bool CheckExest(int sub, int newNum) {
    int remender2 = 0;
    while (newNum > 0)
    {
        remender2 = newNum % 10;
        newNum /= 10;
        if (sub == remender2)return false;

    }
    return true;
}
int MakeNumberUneqe(long long NumberOrginal) {
    int remender1 = 0, newNum = 0;
    while (NumberOrginal > 0)
    {
        remender1 = NumberOrginal % 10;
        NumberOrginal /= 10;
        if (CheckExest(remender1, newNum))
        {
            newNum = 10 * newNum + remender1;
        }
    }
    return newNum;
}
int CountDigitFrequency(short DigitToCheck, long long Number)
{
    int FreqCount = 0;   // Initialize the frequency counter to zero.
    int Remainder3 = 0;   // Variable to store the digit extracted from the number.

    // Process each digit of Number until there are no digits left.
    while (Number > 0)
    {
        Remainder3 = Number % 10;  // Extract the last digit of Number.
        Number = Number / 10;     // Remove the last digit from Number.

        // If the extracted digit matches the digit to check, increment the counter.
        if (DigitToCheck == Remainder3)
        {
            FreqCount++;
        }
    }
    return FreqCount;  // Return the total count of matching digits.
}

void PreintDigitNumber(int NewNumber, long long OrginalNumber) {
    int Remainder4 = 0;
    while (NewNumber > 0)
    {
        Remainder4 = NewNumber % 10;
        NewNumber /= 10;
        cout << "Digit   " << Remainder4 << "   Ferquency is   " << CountDigitFrequency(Remainder4, OrginalNumber) << "   Time (s)\n";
    }
}
int main()
{
    long long  OrginalNumber = ReadPositiveNumber("Enter Postive Number");
    int NewNumber = MakeNumberUneqe(OrginalNumber);
    PreintDigitNumber(NewNumber, OrginalNumber);
    return 0;
}
