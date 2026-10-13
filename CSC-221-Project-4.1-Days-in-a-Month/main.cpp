// This program Determines if user inputted year is a leap year and how many days the user inputted month has
#include <iostream>

using namespace std;
int main()
{
//initializing variables
    int userYear, userMonth, days;
    bool leapYear;
//Explaining purpose of program to user
    cout << "This Program Determines if a year is a leap year and how many days a month has\n";
//asking and Storing userYear
    cout << "Enter a Year:\n";
    cin >> userYear;
//asking and Storing userMonth
    cout << "Enter a Month:\n";
    cin >> userMonth;
//Testing Results
    cout << userMonth << " " << userYear;
//Determining whether or not the year is a leap year

    return 0;

}