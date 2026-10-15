#include <cmath>
#include <iostream>
using namespace std;
int main()
{
//initialize constants
    const double PIE = 3.14;
//initialize variables
    double radius, length, width, height, base, result;
    string userChoice;
//Explain purpose of program to user
    cout << "This program Calculates the Area of a Circle, Rectangle, or Triangle" << endl;
//Request user input
    cout << "Would you like to find the area of a 'Circle', 'Rectangle', or 'Triangle'. You may quit this program by typing 'quit'" << endl;
    cin >> userChoice;
    if(userChoice == "circle" or userChoice == "Circle"){
        cout << "Enter Radius" << endl;
        cin >> radius;
        if(radius < 0){
            cout << "Invalid Radius";
            return 0;
        }
        result = pow(radius, 2) * PIE;
    }
    else if(userChoice == "rectangle" or userChoice == "Rectangle"){
        cout << "Enter Width" << endl;
        cin >> width;
        if(width < 0){
            cout << "Invalid Width";
            return 0;
        }
        cout << "Enter Length" << endl;
        cin >> length;
        if(length < 0){
            cout << "Invalid Width";
            return 0;
        }
        result = length * width;
    }
    else if(userChoice == "triangle" or userChoice == "Triangle"){
        cout << "Enter Base" << endl;
        cin >> base;
        if(base < 0){
            cout << "Invalid Base";
            return 0;
        }
        cout << "Enter Height" << endl;
        cin >> height;
        if(height < 0){
            cout << "Invalid Height";
            return 0;
        }
        result = (base * height) / 2;
        
    }
    else if(userChoice == "quit" or userChoice == "Quit"){
        cout << "Quiting...";
        return 0;
    }
    else{
        cout << "Invalid Input";
        return 0;
    }
    cout << "The area of a " << userChoice << " is " << result;
    return 0;
}