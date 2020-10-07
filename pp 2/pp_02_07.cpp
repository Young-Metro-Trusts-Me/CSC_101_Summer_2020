#include <iostream>

using namespace std;

int main()
{
    int hour, week, day, hours;

    cout << "Enter the number of hours: ";
    cin >> hour;

    week = hour / (7 * 24);
    day = (hour - (week * 7 * 24)) / 24;
    hours = hour - ((week * 7 * 24) + (day * 24));

    cout << week << " weeks " << day << " days " << hours << " hours ";

    return 0;

}
