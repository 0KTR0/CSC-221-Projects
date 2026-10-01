// This program generates a number for 1-9 then displays it as a lottery number.

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()

{
    //Declare variable to append randomly generated numbers too
    string totalLotteryString;

    //Declare max and min for randomly generated number
    const int MIN = 1;

    const int MAX = 9;

// call random object to generate random bits
    random_device engine;
//
    uniform_int_distribution<int> diceValue(MIN, MAX);


    for (int roll = 1; roll <= 6; ++roll){

        uniform_int_distribution<int> lotteryNumber(MIN, MAX);

        string lotteryString = to_string(lotteryNumber(engine));

        totalLotteryString += lotteryString;









    }



    cout << "Here's your Lottery Number!: " << totalLotteryString << endl;
/*
    int boi = 6;

    int tuff = 7;

    cout << boi + tuff << endl;

// convert integers to strings
    string boi_string = to_string(boi);
    string tuff_string = to_string(tuff);

    cout << boi_string + tuff_string << endl;

//generate random number

//set max and min of random number as constant
    const int MIN = 1;

    const int MAX = 6;
// call random object to generate random bits
    random_device engine;
//
    uniform_int_distribution<int> diceValue(MIN, MAX);

    cout << "Rolling the dice...\n";

    cout << diceValue(engine) << endl;

    cout << diceValue(engine) << endl;

*/
    return 0;


}