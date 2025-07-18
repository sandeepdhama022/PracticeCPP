#include <iostream>
#include <string>

using namespace std;

int main(){
    auto message = [](int x, int y){
        return x + y;
    };
    cout << message(9, 8); // call the lambda function
    return 0;
}