#include <iostream>
#include <string>

using namespace std;

int sum(int number){
    if ( number > 1 ){
        // cout << number << endl;
        int result = number + sum( number - 1 );
        cout << result << "\n";
        return result;
    } else {
        return 0;
    }
}
/*
5 - 
*/

int main() {

    int number;
    cout << "Enter a positive number : ";
    cin >> number;
    cout << "Sum of all numbers from " << number << " to 0 is : " << sum(number) << endl;
    return 0;
}