#include <iostream>
using namespace std;

void getLengthWidth(int& length) {
    do {
        cout << "Enter a length: ";
        cin >> length;
        if (length < 0) {
            cout << "Invalid length\n";
        }
    } while (length < 0);
}
double 
int main() {
    int length;
    getLengthWidth(length);
    cout << length << endl;
    return 0;
}