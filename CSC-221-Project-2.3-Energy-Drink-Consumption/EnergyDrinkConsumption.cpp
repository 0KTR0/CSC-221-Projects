// This program estimates energy drink purchasing preferences from survey data.

#include <iostream>

using namespace std;

int main()

{
    
    //initializing total customers surveyed
    const int totalCustomers = 16500;

    //initializing the percentage of customers who prefer energy drinks and citrus drinks
    const double
    energyDrinkPercentage = 0.15,
    citrusPercentage = 0.58;

    //calculating the number of customers who prefer energy drinks and citrus drinks
    int 
    energyDrinkCustomers = totalCustomers * energyDrinkPercentage,
    citrusCustomers = energyDrinkCustomers * citrusPercentage;
    
    //output of calculations
    cout << "Number of Energy Drink Customers: " << energyDrinkCustomers << endl;
    cout << "Number of Citrus Drink Customers: " << citrusCustomers << endl;

    return 0;

}


