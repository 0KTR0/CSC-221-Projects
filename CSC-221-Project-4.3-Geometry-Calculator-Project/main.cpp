#include <cmath>
#include <iostream>
using namespace std;
int main()
{
//initialize constants
    const double PIE = 3.14;
    const int CIRCLE_CASE = 1, RECTANGLE_CASE = 2, TRIANGLE_CASE = 3, QUIT_CASE = 4;
//initialize variables
    double radius, length, width, height, base, result;
    string userChoice;
    int userInput;
//Explain purpose of program to user
    cout << "This program Calculates the Area of a Circle, Rectangle, or Triangle" << endl;
//Request user input
    cout << "1. Circle\n2. Rectangle\n3. Triangle\n4. Quit\nSelect one of the option above: ";
    cin >> userInput;
    switch(userInput){
        case CIRCLE_CASE:
            userChoice = "Circle";
            cout << "Enter Radius: ";
            cin >> radius;
            if(radius < 0){
                cout << "Invalid Radius";
                return 0;
            }
            result = pow(radius, 2) * PIE;
            break;
        case RECTANGLE_CASE:
            userChoice = "Rectangle";
            cout << "Enter Length: ";
            cin >> length;
            if(length < 0){
                cout << "Invalid Length";
                return 0;
            }
            cout << "Enter Width: ";
            cin >> width;
            if(width < 0){
                cout << "Invalid Width";
                return 0;
            }
            result = length * width;
            break;

        case TRIANGLE_CASE:
            userChoice = "Triangle";
            cout << "Enter Base: ";
            cin >> base;
            if(base < 0){
                cout << "Invalid Base";
                return 0;
            }
            cout << "Enter Height: ";
            cin >> height;
            if(height < 0){
                cout << "Invalid Height";
                return 0;
            }
            result = (base * height) / 2;
            break;
        case QUIT_CASE:
            cout << "Quiting...";
            return 0;
        default:
            cout << "Invalid Input";
            return 0;
            break;

    }
//Display Results
    cout << "The area of the " << userChoice << " is " << result;
    return 0;
}