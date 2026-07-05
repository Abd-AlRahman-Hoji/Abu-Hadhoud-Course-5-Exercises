
#include <iostream>
using namespace std;

enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };


int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamallLetter:
    {
        return char(RandomNumber(97, 122));
        break;
    }
    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }
    }
    return '\0';
}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

string GenerateRandWord(enCharType CharType, short length) {
    string st = "";
    for (int i = 1; i <= length; i++)
    {
        st += GetRandomCharacter(CharType);
    }
    return st;
}

string Generatekey() {
    string nameKey = "";
    for (int i = 1; i <= 4; i++)
    {
        if (i == 1)
        {
            nameKey += GenerateRandWord(enCharType::CapitalLetter, 4);
        }
        else {
            nameKey += "-" + GenerateRandWord(enCharType::CapitalLetter, 4);
        }
    }
    return nameKey;
}

void PrintGeneratekeys(int num) {
    for (int i = 1; i <= num; i++)
    {
        cout << "Key[" << i << "] : ";
        cout << Generatekey();
        cout << endl;
    }
}

int main()
{
    PrintGeneratekeys(ReadPositiveNumber("Enter Number How many to Generate Keys \n"));
    return 0;
}