#include <iostream>
#include <string>
using namespace std;

struct student {
	string name;
    int age;
    char grade;
};

int main() {

    student myStudent;

    myStudent.name = "Sandeep Dhama";
    myStudent.age = 31;
    myStudent.grade = 'A';

    cout << "Name: " << myStudent.name << endl;
    cout << "Age: " << myStudent.age << endl;
    cout << "Grade: " << myStudent.grade << endl;
 
    return 0;

}