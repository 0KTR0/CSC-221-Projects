#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    int startingPopulation, days;
    double populationIncreasePercantage, populationIncrease, newestPopulation, calculationPopulation;

    // Get input for Starting Population
    do{
        cout << "Enter the Starting Population: ";
        cin >> startingPopulation;
        if (startingPopulation < 2){
            cout << "Invalid Input, Starting Population Must Greater than 1.\n";
        }
     } while(startingPopulation < 2);

     //Get input for Population Percentage Increase
     do{
        cout << "Enter the rate Population increases daily: ";
        cin >> populationIncreasePercantage;
        if (populationIncreasePercantage <= 0){
            cout << "Invalid Input, Must be greater than 0.\n";
        }
     } while(populationIncreasePercantage <= 0);

     //Get input for Number of days to predict
     do{
        cout << "How many Days would you like to Calculate: ";
        cin >> days;
        if (days < 1){
            cout << "Invalid Input, Number of Days must be Greater than 0.\n";
        }
     } while(days < 1);
    //perform calculations

    //Display the first day to the user.
    cout << startingPopulation << " Organisms is the Population of Day 1." << endl;
    calculationPopulation = startingPopulation;
    //perform a for loop to run iterations when count is less than days.
    for (int count = 1; count < days; count++){
        populationIncrease = calculationPopulation * (populationIncreasePercantage / 100);
        newestPopulation = calculationPopulation + populationIncrease;
        cout << fixed << setprecision(2) << newestPopulation << " Organisms is the Population of Day " << count + 1 << ".\n";
        calculationPopulation = newestPopulation;
        
    }

    return 0;
    

}