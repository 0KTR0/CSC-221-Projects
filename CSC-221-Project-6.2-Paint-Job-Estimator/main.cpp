#include <iostream>
using namespace std;

int main()
{
    const double GALLONS_PER_SQ_FT = 1.0 / 110.0;
    const double LABOR_HOURS_PER_SQ_FT = 8.0 / 110.0;
    const double LABOR_RATE = 25.0;
    double totalSqFt, roomSqFt, laborHours, laborCost, weightedPriceSum, averagePaintPrice, paintCost, totalCost, roomPaintPrice;
    int roomCount, totalGallons;

    do{
        cout << "Enter the number of rooms: ";
        cin >> roomCount;
        if (roomCount <= 0){
            cout << "Invalid Input\n";
        }
    } while (roomCount <= 0);


    for (int count = 1; count <= roomCount; count++){
        cout << "Count: " << count << endl;

        do{
            cout << "What is this rooms area?: ";
            cin >> roomSqFt;
            if (roomSqFt <= 0){
                cout << "Invalid Input\n";   
            }
        } while (roomSqFt <= 0);
        totalSqFt += roomSqFt;

        do{
            cout << "What is this rooms paint price?: $";
            cin >> roomPaintPrice;
            if (roomPaintPrice < 10){
                cout << "Invalid Input\n";   
            }
        } while (roomPaintPrice < 10);
        weightedPriceSum  +=  (roomSqFt * roomPaintPrice);

    }

    cout << "Weighted Price Sum $" << weightedPriceSum << endl;
    cout << "Total Square Foot " << totalSqFt << endl;
    return 0;
}