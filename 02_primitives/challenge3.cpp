/*
This program is a simple C++ program that allows a user to order a type of tea and specify the number of cups they want.
Then it prints out the order details.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string orderedTea;
    int teaCups;

    cout << "Which tea would you like to have? \n";
    getline(cin, orderedTea);
    cout << "How many cups of " << orderedTea << " would you like? \n";
    cin >> teaCups;

    cout << "Customer ordered " << teaCups << " cups of " << orderedTea << endl;
    return 0;
}