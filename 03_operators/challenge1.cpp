#include <iostream>
using namespace std;

// User Input - Tea Packs, price per pack
// Calculation - 10% tax on total price
// Output - final price with tax

int main() {
    int teaPacks;
    float pricePerPack;
    float totalPrice;

    cout << "Enter the number of tea packs do you want!" << endl;
    cin >> teaPacks;
    cout << "Enter the price per pack!" << endl;
    cin >> pricePerPack;

    // Calculate total price
    totalPrice = teaPacks * pricePerPack;

    cout << "Please pay $" << totalPrice * 1.1 << endl;
    
    return 0;

}