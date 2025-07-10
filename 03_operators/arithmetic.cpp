#include <iostream>
using namespace std;

int main() {

    int teaCups;
    float pricePerCup;
    float totalPrice;
    float discountCriteria = 60;
    float discountRate = 5; // 10% discount

    cout << "How many cups of tea would you like to have?" << endl;
    cin >> teaCups;
    cout << "What is the price of one cup of tea?" << endl;
    cin >> pricePerCup;

    totalPrice = teaCups * pricePerCup;
    cout << "The total price for " << teaCups << " cups of tea is $" << totalPrice << endl;

    if (totalPrice > discountCriteria) {
        cout << "You are eligible for " << discountRate << "% discount!" << endl;
        cout << "Discount applied of $" << totalPrice * (discountRate / 100) << endl;
        cout << "Please pay $" << totalPrice * (1 - discountRate / 100) << endl;
    } else {
        cout << "Please pay $" << totalPrice << endl;
    }

    return 0;

}