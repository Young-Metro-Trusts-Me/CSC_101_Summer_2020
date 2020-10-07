#include <iostream>

using namespace std;

int main()
{
    int day, year, month, days;

    cout << "Enter the number of days: " ;
    cin >> day;

    year = day / 365;
    month = (day - (year * 365)) / 30;
    days = day - ((year * 365) + (month * 30)) ;

    cout << year << " years " << month << " months " << days << " days";

    return 0;

}
