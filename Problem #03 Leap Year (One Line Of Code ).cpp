// Problem #03 Leap Year (One Line Of Code ).cpp 
#include <iostream>

using namespace std;
short ReadYear()
{
    short Year = 0;
    cout << "Pleas Entear a Number: \n";
    cin >> Year;
    return Year;
}

bool IsLeapYear(short Number)
{
    return (Number % 4 == 0 && Number % 100 != 0) || (Number % 400 == 0);
      

}
int main()
{
    short Year = ReadYear();

    if (IsLeapYear(Year))
        cout << "\n\n\nYes, Year [" << Year << "] Is a Leap Year. \n" << endl;
    else

        cout << "\nNo, Year [" << Year << "] Is Not Leap Year. \n" << endl;


    system("puse>0");
    return 0;
}
