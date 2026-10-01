// This program generates a number for 1-9 then displays it as a lottery number.

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()

{
// Declare variable to append randomly generated numbers too
    string totalLotteryString;

// Declare max and min for randomly generated number
    const int MIN = 1;
    const int MAX = 9;

// call random_device to generate random bits
    random_device engine;
    uniform_int_distribution<int> lotteryNumber(MIN, MAX);
  


// for loop which generates the number and appends it to totalLotteryFunction
    for (int roll = 1; roll <= 6; ++roll){

// calls random number generation then converts to string
        string lotteryString = to_string(lotteryNumber(engine));
// appends lotteryString to totalLotteryString
        totalLotteryString += lotteryString;
    }


    //Displays result of for loop

    cout << "Here's your Lottery Number!: " << totalLotteryString << endl;

    return 0;


}