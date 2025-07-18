#include <iostream>
#include <string>

using namespace std;

int main(){
    auto message = [](){
        cout << "Hello from Lambda Function!" << endl;
    };
    message(); // call the lambda function
    return 0;
}

