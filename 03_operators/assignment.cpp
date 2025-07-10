#include <iostream>
using namespace std;

// Ask user how many tea bags they have
// If tea bags < 10, assign them 5 bags extra
// Udpate the number of tea bags
// Print the current number of tea bags user have

int main() {

    int teaBags;
    
    cout << "How many tea bags do you have?" << endl;
    cin >> teaBags;

    if ( teaBags < 10 )
    {
        teaBags += 5; // Assign 5 extra tea bags
    }
    
    cout << "User currently have " << teaBags << " tea bags." << endl;
    return 0;

}