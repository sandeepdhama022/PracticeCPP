#include <iostream>
using namespace std;

int main() {

    int teaCups;
    float pricePerCup;
    float totalPrice;
    float dicountCriteria = 120.0;

    cout << "How many cups of tea would you like to have?" << endl;
    cin >> teaCups;
    cout << "What is the price of one cup of tea?" << endl;
    cin >> pricePerCup;

    totalPrice = teaCups * pricePerCup;
    cout << "The total price for " << teaCups << " cups of tea is $" << totalPrice << endl;

    return 0;

}