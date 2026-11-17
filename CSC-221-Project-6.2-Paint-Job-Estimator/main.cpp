#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int getRoomCount(int roomCount){
    do{
        cout << "Enter the number of rooms: ";
        cin >> roomCount;
        if (cin.fail() || roomCount <= 0){
            cout << "Invalid Input\n";
            roomCount = -1;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (roomCount <= 0);
    return roomCount;
}

void getTotalAreaAndPaintPrice(double& totalSqFt, double& weightedPriceSum, int roomCount){
    int roomSqFt;
    double roomPaintPrice;
    for (int count = 1; count <= roomCount; count++){
        cout << "Count: " << count << endl;

        do{
            cout << "What is this rooms area?: ";
            cin >> roomSqFt;
            if (cin.fail() || roomSqFt < 0){
                cout << "Invalid Input\n";  
                roomSqFt = -1;
                cin.clear();
                cin.ignore(10000, '\n'); 
            }
        } while (roomSqFt < 0);
        totalSqFt += roomSqFt;

        do{
            cout << "What is this rooms paint price?: $";
            cin >> roomPaintPrice;
            if (cin.fail() || roomPaintPrice < 10){
                cout << "Invalid Input\n";
                roomPaintPrice = -1;
                cin.clear();
                cin.ignore(10000, '\n');   
            }
        } while (roomPaintPrice < 10);
        weightedPriceSum  +=  (roomSqFt * roomPaintPrice);
    }
}

void displayProperties(double totalSqFt, int totalGallons, double laborHours, double PaintCost, double laborCost, double totalCost){
    cout << fixed << setprecision(2) << "Total area: " << totalSqFt << " square feet" << endl;
    cout << fixed << setprecision(2) << "To purchase: " << totalGallons << " gallons" << endl;
    cout << fixed << setprecision(2) << "Labor hours: " << laborHours << endl;
    cout << fixed << setprecision(2) << "Estimated paint cost: $" << paintCost << endl;
    cout << fixed << setprecision(2) << "Labor charges: $" << laborCost << endl;
    cout << fixed << setprecision(2) << "Total estimated cost: $" << totalCost << endl;
}
int getTotalGallons(int totalGallons, double totalSqFt, double GALLONS_PER_SQ_FT){
    return totalGallons = ceil(totalSqFt * GALLONS_PER_SQ_FT);
}
int main()
{
    const double GALLONS_PER_SQ_FT = 1.0 / 110.0;
    const double LABOR_HOURS_PER_SQ_FT = 8.0 / 110.0;
    const double LABOR_RATE = 25.0;
    double totalSqFt = 0.0, laborHours, laborCost, weightedPriceSum = 0.0, averagePaintPrice, paintCost, totalCost;
    int roomCount, totalGallons;

    roomCount = getRoomCount(roomCount);
    getTotalAreaAndPaintPrice(totalSqFt, weightedPriceSum, roomCount);
    totalGallons = getTotalGallons(totalGallons, totalSqFt, GALLONS_PER_SQ_FT);
    cout << roomCount;

/*
    double totalSqFt = 0.0, roomSqFt, laborHours, laborCost, weightedPriceSum = 0.0, averagePaintPrice, paintCost, totalCost, roomPaintPrice;
    int roomCount, totalGallons;
// Do-while loop which asks the user for number of rooms untill valid input over 0
    do{
        cout << "Enter the number of rooms: ";
        cin >> roomCount;
        if (cin.fail() || roomCount <= 0){
            cout << "Invalid Input\n";
            roomCount = -1;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (roomCount <= 0);

// for loop determinate by room count which asks each rooms area and paint price
    for (int count = 1; count <= roomCount; count++){
        cout << "Count: " << count << endl;

        do{
            cout << "What is this rooms area?: ";
            cin >> roomSqFt;
            if (cin.fail() || roomSqFt < 0){
                cout << "Invalid Input\n";  
                roomSqFt = -1;
                cin.clear();
                cin.ignore(10000, '\n'); 
            }
        } while (roomSqFt < 0);
        totalSqFt += roomSqFt;

        do{
            cout << "What is this rooms paint price?: $";
            cin >> roomPaintPrice;
            if (cin.fail() || roomPaintPrice < 10){
                cout << "Invalid Input\n";
                roomPaintPrice = -1;
                cin.clear();
                cin.ignore(10000, '\n');   
            }
        } while (roomPaintPrice < 10);
        weightedPriceSum  +=  (roomSqFt * roomPaintPrice);

    }
// if logic to determine if calculations will result in error
    if (totalSqFt != 0){
// calculate total galllons
        totalGallons = ceil(totalSqFt * GALLONS_PER_SQ_FT);
// calculate labor hours
        laborHours = totalSqFt * LABOR_HOURS_PER_SQ_FT;
// calculate labor cost
        laborCost = laborHours * LABOR_RATE;
// calculate average paint price
        averagePaintPrice = weightedPriceSum / totalSqFt;
// calculate paint cost
        paintCost = totalGallons * averagePaintPrice;
// calculate total cost
        totalCost = paintCost + laborCost;  
    }
    else{
        averagePaintPrice = 0;
        totalGallons = 0;
        paintCost = 0;
        laborHours = 0;
        laborCost = 0;
        totalCost = 0;
    }

// display total gallons, sqft, labor hours, paintcost, labor cost, and total cost.
    cout << fixed << setprecision(2) << "Total area: " << totalSqFt << " square feet" << endl;
    cout << fixed << setprecision(2) << "To purchase: " << totalGallons << " gallons" << endl;
    cout << fixed << setprecision(2) << "Labor hours: " << laborHours << endl;
    cout << fixed << setprecision(2) << "Estimated paint cost: $" << paintCost << endl;
    cout << fixed << setprecision(2) << "Labor charges: $" << laborCost << endl;
    cout << fixed << setprecision(2) << "Total estimated cost: $" << totalCost << endl;
    return 0;
    */
}