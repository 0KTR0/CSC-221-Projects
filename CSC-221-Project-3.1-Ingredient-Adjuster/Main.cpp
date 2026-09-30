// This program calculates the amount of ingredients needed to make a specified number of cookies.
#include <iostream>

using namespace std;

int main()

{
    // declare constants for base recipe amounts
    const double
    BASE_COOKIES = 48.0, 
    BASE_SUGAR   = 1.5,
    BASE_BUTTER  = 1.0,
    BASE_FLOUR   = 2.75;   


    // intialize variable to hold desired amount of cookies
    int desiredCookies;

    //initialize variables to hold ingredient amounts and multiplier
    double sugarNeeded, butterNeeded, flourNeeded, multiplier;


    // Display program purpose to the user
    cout << "This program calculates the required ingredients to bake your desired amount of cookies.\n";

    // prompt user for desired number of cookies
    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

    // calculate the multiplier and ingredient amounts
    multiplier = desiredCookies / BASE_COOKIES;
    sugarNeeded = BASE_SUGAR * multiplier;
    butterNeeded = BASE_BUTTER * multiplier;
    flourNeeded = BASE_FLOUR * multiplier;

    // display the results of calculations
    cout << "You need " << sugarNeeded << " cups of sugar." << endl;
    cout << "You need " << butterNeeded << " cups of butter." << endl;
    cout << "You need " << flourNeeded << " cups of flour." << endl;

    return 0;

}