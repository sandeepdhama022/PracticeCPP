#include <iostream>
#include <string>
using namespace std;

class car{
    public:
        string brandName;
        string modelName;
        string color;
        int year;
};

int main(){

    car myDreamCar;

    myDreamCar.brandName = "Mercedes";
    myDreamCar.modelName = "G Wagon";
    myDreamCar.color = "Black";
    myDreamCar.year = 2026;

    cout << "My dream car is a " << myDreamCar.color << " " << myDreamCar.brandName << " - " << myDreamCar.modelName << " from the year " << myDreamCar.year << endl;
    return 0;

}