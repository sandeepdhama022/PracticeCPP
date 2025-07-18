#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    string model;
    int year;
};

void myFunction (Car dreamCar){     // Car is data type which we defined as structure, dreamCar is a variable of type Car

    cout << "Brand : " << dreamCar.brand << endl;
    cout << "Model : " << dreamCar.model << endl;
    cout << "Year : " << dreamCar.year << endl;

}


int main (){

    Car myDreamCar = {"Mercedes", "G Wagon", 2026};
    myFunction(myDreamCar);
    return 0;

}