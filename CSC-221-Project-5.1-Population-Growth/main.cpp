#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    const int MIN_STARTING_POPULATION = 2;
    const double MIN_POPULATION_INCREASE_RATE = 0.0;
    const int MIN_DAYS = 1;

    int startingPopulation, days;
    double populationIncreasePercantage, populationIncrease, newestPopulation, calculationPopulation;

    // Get input for Starting Population
    do{
        cout << "Enter the Starting Population: ";
        cin >> startingPopulation;
        if (startingPopulation < MIN_STARTING_POPULATION){
            cout << "Invalid Input, Starting Population Must Greater than 1.\n";
        }
     } while(startingPopulation < MIN_STARTING_POPULATION);

     //Get input for Population Percentage Increase
     do{
        cout << "Enter the rate Population increases daily: ";
        cin >> populationIncreasePercantage;
        if (populationIncreasePercantage <= MIN_POPULATION_INCREASE_RATE){
            cout << "Invalid Input, Must be greater than 0.\n";
        }
     } while(populationIncreasePercantage <= MIN_POPULATION_INCREASE_RATE);

     //Get input for Number of days to predict
     do{
        cout << "How many Days would you like to Calculate: ";
        cin >> days;
        if (days < MIN_DAYS){
            cout << "Invalid Input, Number of Days must be Greater than 0.\n";
        }
     } while(days < MIN_DAYS);
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