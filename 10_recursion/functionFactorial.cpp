#include <iostream>
#include <string>
using namespace std;

int factorial(int number){
    if ( number > 1 ){
        return number * factorial( number - 1 );
    } else {
        return 1; // last case for 1!
    }
}

int main() {
    int number;
    cout << "Enter a positive number : ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}