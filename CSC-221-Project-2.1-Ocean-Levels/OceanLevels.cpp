// This program calculates ocean level increases over several years.

#include <iostream>
using namespace std;

int main()

{


    const double oceanLevelIncrease = 1.5; // constant value for ocean level increase per year
    double riseInFiveYears; // Variable to store the rise in ocean level over 5 years
    double riseInSevenYears; // Variable to store the rise in ocean level over 7 years
    double riseInTenYears; // Variable to store the rise in ocean level over 10 years

    riseInFiveYears = oceanLevelIncrease * 5; // Calculate rise in 5 years
    riseInSevenYears = oceanLevelIncrease * 7; // Calculate rise in 7 years
    riseInTenYears = oceanLevelIncrease * 10; // Calculate rise in 10 years


    cout << "Ocean level increase per year: " << oceanLevelIncrease << " mm" << endl;
    cout << "Rise in 5 years: " << riseInFiveYears << " mm" << endl;
    cout << "Rise in 7 years: " << riseInSevenYears << " mm" << endl;
    cout << "Rise in 10 years: " << riseInTenYears << " mm" << endl;

    return 0;

}


