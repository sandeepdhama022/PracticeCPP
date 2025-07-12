#include <iostream>
using namespace std;

int main() {
    int tableNum;

    cout << "Enter the number for which you want to print the table" << endl;
    cin >> tableNum;

    int i = 1;
    while ( i <= 10) {
        cout << tableNum << " * " << i << " = " << tableNum * i << endl;
        i++;
    }

}