#include <iostream>
#include <string>
using namespace std;

// Ask customer they are student or not
// Ask customer how many cups of tea they want
// If customer is student or cups of tea > 15
// Customer eligible for tea subscription discount
// Print whether customer is eligible for tea subscription discount or not

int main() {
    string isStudent;
    int teaCups;

    cout << "Are you a student? ( yes/no )" << endl;
    cin >> isStudent;
    cout << "How many cups of tea do you want?" << endl;
    cin >> teaCups;
    
    // Check if customer is eligible for tea subscription discount
    if ( isStudent == "yes" || teaCups > 15 ) {
        cout << "You are eligible for tea subscription discount!" << endl;
    }
    
    return 0;

}