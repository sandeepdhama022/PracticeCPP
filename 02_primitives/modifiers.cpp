#include <iostream>
using namespace std;

int main(){
    unsigned int smallTeaPack = -200; // unsigned integers cannot represent negative values, here garbage would be stored.
    unsigned int largeTeaPack = 500;

    cout << smallTeaPack << endl;
    cout << largeTeaPack << endl;
    return 0;
}