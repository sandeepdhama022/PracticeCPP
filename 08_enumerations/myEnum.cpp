#include <iostream>
#include <string>
using namespace std;

enum grade {
	A,
    B,
    C,
    D
};

int main() {

    enum grade myGrade = C;
    
    cout << "My grade is: " << myGrade << endl; 
    return 0;

}