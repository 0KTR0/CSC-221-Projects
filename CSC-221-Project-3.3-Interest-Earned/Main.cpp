// This program calculates the final balance and interest earned of a compounding savings account after one year

#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    // initialize times interest is compounded a year
    int annualCompoundRate;

    //initialize variables
    double
    principal,
    interestRate,
    interestRateDecimal,
    finalBalance,
    interestEarned;

    //Display purpose of program to user
    cout << "This program calculates the Final balance and interest earned of your compounding savings account after one year\n";

    //Asks user for principal
    cout << "Enter Starting Amount:\n";
    cin >> principal;

    //ask user for interest rate percentage
    cout << "Enter Interest rate: \n";
    cin >> interestRate;

    //ask user for Annualcompound rate
    cout << "How many times does your Savings compound a year?:\n";
    cin >> annualCompoundRate;

    //perform necessary calculations
    interestRateDecimal = interestRate/100;
    finalBalance = principal * pow(1 + interestRateDecimal/annualCompoundRate,annualCompoundRate);
    interestEarned = finalBalance - principal;

    //round answers to 2 decimal places
    finalBalance = round(finalBalance * 100.0) / 100.0;
    interestEarned = round(interestEarned * 100.0) / 100.0;
    
    //Display results
    cout << "$" << finalBalance << " is the total amount in savings after a year.\n";

    cout << "$" << interestEarned << " is the amount of interest earned after a year.\n";

    return 0;

}


