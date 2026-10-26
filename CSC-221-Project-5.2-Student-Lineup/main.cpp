#include <iostream>
#include <random>

using namespace std;

int main()

{
    //Declare variables
    int target, userGuess, guessAmount=0;
    // Declare max and min contants for randomly generated number
    const int MIN = 0;
    const int MAX = 1000;

    //call random_device to generate random bits
    random_device engine;
    uniform_int_distribution<int> distribution{MIN, MAX};
    target = distribution(engine);
    //cout << target << endl;
    // Do-While loop which loops untill userGuess == target
    do{
        cout << "Guess the Target!: ";
        cin >> userGuess;
        if(userGuess > target){
            cout << "Lower!\n";
        }
        else if(userGuess < target){
            cout << "Higher\n";
        }
        guessAmount +=1;
    } while (userGuess > target or userGuess < target);
    //Display The results to user
    cout << "You Guessed the number!\nYour Guess count was " << guessAmount;


    

}