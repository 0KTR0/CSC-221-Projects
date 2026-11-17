#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int getRoomCount(){
    int roomCount;
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
    double roomPaintPrice, roomSqFt;
    for (int count = 1; count <= roomCount; count++){
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

void displayProperties(double totalSqFt, int totalGallons, double laborHours, double paintCost, double laborCost, double totalCost){
    cout << fixed << setprecision(2) << "Total area: " << totalSqFt << " square feet" << endl;
    cout << fixed << setprecision(2) << totalGallons << " Gallons to Purchase" << endl;
    cout << fixed << setprecision(2) << "Labor hours: " << laborHours << endl;
    cout << fixed << setprecision(2) << "Estimated paint cost: $" << paintCost << endl;
    cout << fixed << setprecision(2) << "Labor charges: $" << laborCost << endl;
    cout << fixed << setprecision(2) << "Total estimated cost: $" << totalCost << endl;
}
int getTotalGallons(double totalSqFt, double GALLONS_PER_SQ_FT){
    return ceil(totalSqFt * GALLONS_PER_SQ_FT);
}
void getLaborHoursAndCost(double& laborHours, double& laborCost, double totalSqFt, double LABOR_HOURS_PER_SQ_FT, double LABOR_RATE){
        laborHours = totalSqFt * LABOR_HOURS_PER_SQ_FT;
        laborCost = laborHours * LABOR_RATE;
}
double getAveragePaintPrice(double weightedPriceSum, double totalSqFt){
    return weightedPriceSum / totalSqFt;
}
void getFinalCosts(double& paintCost, double& totalCost, int totalGallons, double averagePaintPrice, double laborCost){
        paintCost = totalGallons * averagePaintPrice;
        totalCost = paintCost + laborCost;
}
void initializeCalculations(double totalSqFt, double weightedPriceSum, 
                            double GALLONS_PER_SQ_FT, double LABOR_HOURS_PER_SQ_FT, double LABOR_RATE,
                            int& totalGallons, double& laborHours, double& laborCost, 
                            double& averagePaintPrice, double& paintCost, double& totalCost) 
{
    if (totalSqFt != 0) {
        totalGallons = getTotalGallons(totalSqFt, GALLONS_PER_SQ_FT);
        getLaborHoursAndCost(laborHours, laborCost, totalSqFt, LABOR_HOURS_PER_SQ_FT, LABOR_RATE);
        averagePaintPrice = getAveragePaintPrice(weightedPriceSum, totalSqFt);
        getFinalCosts(paintCost, totalCost, totalGallons, averagePaintPrice, laborCost);
    }
    else {
        totalGallons = 0;
        laborHours = 0.0;
        laborCost = 0.0;
        averagePaintPrice = 0.0;
        paintCost = 0.0;
        totalCost = 0.0;
    }
}
int main()
{
    const double GALLONS_PER_SQ_FT = 1.0 / 110.0;
    const double LABOR_HOURS_PER_SQ_FT = 8.0 / 110.0;
    const double LABOR_RATE = 25.0;
    double totalSqFt = 0.0, laborHours, laborCost, weightedPriceSum = 0.0, averagePaintPrice, paintCost, totalCost;
    int roomCount, totalGallons;

    roomCount = getRoomCount();
    getTotalAreaAndPaintPrice(totalSqFt, weightedPriceSum, roomCount);
    initializeCalculations(totalSqFt, weightedPriceSum, GALLONS_PER_SQ_FT, LABOR_HOURS_PER_SQ_FT, LABOR_RATE, 
        totalGallons, laborHours, laborCost, 
        averagePaintPrice, paintCost, totalCost);
    displayProperties(totalSqFt, totalGallons, laborHours, paintCost, laborCost, totalCost);

}