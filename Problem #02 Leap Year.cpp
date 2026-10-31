// Problem #02 Leap Year.cpp 
#include <iostream>

using namespace std;
int ReadNumber() 
{
    int Number = 0;
    cout << "Pleas Entear a Number: \n";
    cin >> Number;
    return Number;
}
bool  LeapYear(int Number)
{
    if (Number % 4 == 0 && Number % 100 != 0 ||
        Number % 400 == 0)
        return true;
    else
        return false;
}
bool IsLeapYear(int Number)
{
    if (Number % 400 == 0)
        return true;
    if (Number % 100 == 0)
        return false;
    if (Number % 4 == 0)
        return true;

}
int main()
{
    int Number = ReadNumber();

    if (LeapYear(Number))
        cout << "\nLeap Year. \n" << endl;
    else 
        cout << "\nNot Leap Year. \n" << endl;


    if (IsLeapYear(Number))
        cout << "\n\n\nYes, Year [" << Number << "] Is a Leap Year. " << endl;
    cout << "\nNo, Year [" << Number << "Is Not Leap Year. " << endl;


    system("puse>0");
    return 0;
}
