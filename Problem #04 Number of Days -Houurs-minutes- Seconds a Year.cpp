// Problem #04 Number of Days -Houurs-minutes- Seconds a Year.cpp 
#include <iostream>

using namespace std;
short ReadYear()
{
    short Year = 0;
    cout << "Please enter a year to check:? ";
    cin >> Year;
    return Year;
}
bool IsLeapYear(short Number)
{
    return (Number % 4 == 0 && Number % 100 != 0) || (Number % 400 == 0);


}

short NumberofDaysInAYear(short Year)
{
    return  (IsLeapYear(Year)) ? 366 : 365;
}
short NumberofHouursInAYear(short Year)
{
    return NumberofDaysInAYear( Year) * 24;
}
 int NumberofminutesInAYear(short Year)
{
    return NumberofHouursInAYear(Year) * 60;
}
 int NumberofSecondsInAYear(short Year)
{
    return NumberofminutesInAYear(Year) * 60;
}


int main()
{
    
    short Year = ReadYear();
      
        cout << "\n\n\n";
        cout << "Number of days in year    [" << Year << "] is " << NumberofDaysInAYear(Year) << endl;
        cout << "Number of Houurs in year  [" << Year << "] is " << NumberofHouursInAYear(Year) << endl;
        cout << "Number of minutes in year [" << Year << "] is " << NumberofminutesInAYear(Year) << endl;
        cout << "Number of Seconds in year [" << Year << "] is " << NumberofSecondsInAYear(Year) << endl;
    
   
   
    return 0;

}

