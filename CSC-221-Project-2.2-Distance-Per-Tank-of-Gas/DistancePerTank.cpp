// This program calculates how far a car can travel on one tank of gas.

#include <iostream>

using namespace std;

int main()

{

    const int tankSize = 20; // Tank size in gallons
    const double townMPG = 23.5; // Miles per gallon in town
    const double highwayMPG = 28.9; // Miles per gallon on the highway
    double townDistance, highwayDistance; // initialization of variables to hold the distances

    // Calculate the distance the car can travel in town and on the highway
    townDistance = tankSize * townMPG;
    highwayDistance = tankSize * highwayMPG;

    // Display the results
    cout << "The car can travel " << townDistance << " miles in town on one tank of gas." << endl;
    cout << "The car can travel " << highwayDistance << " miles on the highway on one tank of gas." << endl;

    return 0;

}