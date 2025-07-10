/*
This program is a simple C++ program that prompts the user for the base price of tea, calculates the actual price by adding a 10% markup, and then displays the final price.
Then it prints out the actual price of the tea.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;
    float basePriceOfTea;
    int teaPrice;

    cout << "What is the base price of the tea? \n";
    getline(cin, userInput);
    // cin >> basePriceOfTea;

    basePriceOfTea = stof(userInput); // Convert string to float
    teaPrice = basePriceOfTea * 1.1; // Adding 10% to the base price


    cout << "The actual price of the tea is: " << teaPrice << endl;
    return 0;
}