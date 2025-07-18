#include <iostream>
#include <string>

using namespace std;

int factorial(int number){
    if ( number > 0 ){
        int result = number * factorial( number - 1 );
        cout << result << "\n";
        return result;;
    } else {
        return 0;
    }
}

/*
5 - 5 * 4
4 - 4 * 3
3 - 3 * 2
2 - 2 * 1
1 - 1 * 0
*/

int main() {

    int number;
    cout << "Enter a positive number : ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}