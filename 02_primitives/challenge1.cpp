/*
This program is a simple C++ program that defines variables for a type of tea, its price per kilogram, and its rating.
Then it prints out these details in a formatted manner.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string typeOfTea = "Lemon Tea";
    float priceOfTeaPerKg = 14.99;
    char teaRating = 'A';

    cout << "My favorite tea is \"" << typeOfTea << "\"" << endl;
    cout << "The price of \"" << typeOfTea << "\" is $" << priceOfTeaPerKg << "/Kg" << endl;
    cout << "The rating of this \"" << typeOfTea << "\" is \'" << teaRating << "\'" << endl;
    
    return 0;
}