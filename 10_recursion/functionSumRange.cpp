#include <iostream>
#include <string>

using namespace std;

int sum(int number){
    
    if ( number >= 1 ){

        return number + sum( number - 1 );

    } else {
        
        return 0;

    }
}

int main() {

    int number;
    cout << "Enter a positive number : ";
    cin >> number;
    cout << "Sum of all number below " << number << " is " << sum(number) << endl;
    return 0;
    
}