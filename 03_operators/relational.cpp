#include <iostream>
#include <string>
using namespace std;

// Ask costomer how many cups of tea they want
// If cups of tea > 20, assign them "Gold" loyalty badge
// If cups of tea > 10 and <= 20, assign them "Silver" loyalty badge
// Print the loyalty badge assigned to the customer

int main() {

    int teaCups;
    string loyaltyBadge;
    
    cout << "How many cups of tea do you want?" << endl;
    cin >> teaCups;

    if ( teaCups > 20 ) {
        loyaltyBadge = "Gold"; // Assign Gold loyalty badge
    } else if ( teaCups > 10 && teaCups <= 20 ) {
        loyaltyBadge = "Silver"; // Assign Silver loyalty badge
    } else {
        loyaltyBadge = "No"; // No badge assigned
        exit(0); // Exit if no badge is assigned
    }
    
    cout << "You have \"" << loyaltyBadge << "\" loyalty badge" << endl;
    
    return 0;

}