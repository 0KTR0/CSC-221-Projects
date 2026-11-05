#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string currentName, firstName = "ZZZ", lastName = " ";
    int count = 0;

    ifstream inputFile("CSC-221-Project-5.2-Student-Lineup/People.txt");

    if (!inputFile){
        cout << "Error opening file.\n";
        return 1;
    }


    while (getline(inputFile, currentName))
    {
        if (currentName < firstName){
            firstName = currentName;
        }
        if (currentName > lastName) {
            lastName = currentName;
        }
        count++;
    }

    cout << "Total names read: " << count << endl;
    cout << "The alphabetically first student name is " << firstName << endl;
    cout << "The alphabetically last student name is " << lastName << endl;
    inputFile.close();
    return 0;
}