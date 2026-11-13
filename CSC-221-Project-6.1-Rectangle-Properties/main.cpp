#include <iostream>
using namespace std;

void getLengthWidth(double& length, double& width) {
    do {
        cout << "Enter a length: ";
        cin >> length;
        if (length <= 0) {
            cout << "Invalid length\n";
        }
    } while (length <= 0);
    do {
        cout << "Enter a Width: ";
        cin >> width;
        if (width <= 0) {
            cout << "Invalid Width\n";
        }
    } while (width <= 0);
}

double calcPerimeter(double length,double width){
    return 2 * (length + width);

}

double calcArea(double length, double width){
    return (length * width);

}

void displayProperties(double perimeter, double area){
    cout << "The Area of the Rectangle is " << area << endl;
    cout << "The Perimeter of the Rectangle is " << perimeter << endl; 
}


int main() {
    double length, width, area, perimeter;
    char userChoice='y';
    do{
    if (userChoice == 'y'){
        getLengthWidth(length, width);
        area = calcArea(length,width);
        perimeter = calcPerimeter(length,width);
        displayProperties(perimeter, area);
        cout << "Would you like to continue?\n'y' or 'n': ";
    }
    else{
        cout << "Invalid Input\nTry Again: ";
    }
    cin >> userChoice;
    } while(userChoice != 'n');
    return 0;
}