// This program Determines if user inputted year is a leap year and how many days the user inputted month has
#include <iostream>

using namespace std;
int main()
{
//Declaring constants
    const int 
    LEAP_CYCLE = 4,
    CENTURY = 100,
    LEAP_CENTURY_CYCLE = 400,
    DAYS_LONG_MONTH = 31,
    DAYS_SHORT_MONTH = 30,
    DAYS_FEB_LEAP = 29,
    DAYS_FEB_COMMON = 28;
//Declaring variables
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
//Determining whether or not the year is a leap year
    if(userYear % CENTURY == 0){
        if(userYear % LEAP_CENTURY_CYCLE == 0){
            leapYear = true;
        }

        else{
            leapYear = false;
        }
    }

    else if(userYear % LEAP_CYCLE == 0){
        leapYear = true;
    }

    else{
        leapYear = false;
    }
//Determine validity of month input and number of days
    if(userMonth == 1 || userMonth == 3 || userMonth == 5 || userMonth == 8 || userMonth == 10 || userMonth == 12 || userMonth == 7){
        days = DAYS_LONG_MONTH;
    }

    else if(userMonth == 4 || userMonth == 6 || userMonth == 9 || userMonth == 11){
        days = DAYS_SHORT_MONTH;
    }
    else if (userMonth == 2){
        if(leapYear){
            days = DAYS_FEB_LEAP;
        }

        else{
            days = DAYS_FEB_COMMON;
        }
    }
    else{
        cout << "Invalid Month" << endl;
        return 0;
    }
//Printing Result
    if(leapYear){
        cout << "This year is a leap year!" << endl;
    }
    else{
        cout << "This year is not a leap year" << endl;
    }
    cout << "This month has " << days << " days this year." << endl;
    return 0;
}

