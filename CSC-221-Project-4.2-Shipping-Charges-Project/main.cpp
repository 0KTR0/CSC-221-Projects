#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
//Declare constants
    const int
    MILES_UNIT = 500,
    WEIGHT_MAX = 20,
    WEIGHT_MIN = 0,
    WEIGHT_BOUNDARY_1 = 10,
    WEIGHT_BOUNDARY_2 = 6,
    WEIGHT_BOUNDARY_3 = 2,
    DISTANCE_MAX = 3000,
    DISTANCE_MIN = 10;
    
//declare variables
    double packageWeight, shippingDistance, shippingUnits, milesRate, totalCost;
//Display purpose of program to user
    cout << "This program calculates the shipping charge of sending a package by its weight and distance it needs to be delivered." << endl;
//Ask for packageWeight
    cout << "Enter the weight of your package" << endl;
    cin >> packageWeight;
//Ask for shipping distance
    cout << "Enter your estimated shipping distance" << endl;
    cin >> shippingDistance;
//logic to determine weight range and miles rate
    if(packageWeight > WEIGHT_MIN && packageWeight <= WEIGHT_MAX){
//1st group
        if(packageWeight > WEIGHT_BOUNDARY_1){
            milesRate = 4.80;
        }
//2nd group
        else if(packageWeight > WEIGHT_BOUNDARY_2){
            milesRate = 3.70;
        }
//3rd group
        else if(packageWeight > WEIGHT_BOUNDARY_3){
            milesRate = 2.20;
        }
//4th group
        else{
            milesRate = 1.10;
        }
    }
//else statment if packageWeight is greater than 20 or less than 0
    else{
        cout << "Invalid Weight\nValid inputs between " << WEIGHT_MIN+1 << "-" << WEIGHT_MAX;
        return 0;
    }
//logic to determine if shippingDistance is valid then performs equation for shippingUnits
    if(shippingDistance >= DISTANCE_MIN && shippingDistance <= DISTANCE_MAX){
        shippingUnits = ceil(shippingDistance/MILES_UNIT);
    }
    else{
        cout << "Invalid Distance\nValid inputs between " << DISTANCE_MIN << "-" << DISTANCE_MAX;
        return 0;
    }
//equation to decipher total cost
    totalCost = shippingUnits * milesRate;
//Display resulst
    cout << "The shipping charge is $" << fixed << setprecision(2) << totalCost;
        return 0;

}