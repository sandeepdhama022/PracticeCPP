#include <iostream>

using namespace std;

// Call by value example
// Here function parameter received value
void addSix(int score);

// Call by reference example
// Here function parameter received value
// void addSix(int &score);

int main() {

    int score = 2;
    addSix(score);
    cout << "Score in main function is " << score << endl;
    return 0;
}

// Call by value example
void addSix(int score) {
    score += 6;
    cout << "Score after adding six is " << score << endl;
}

// Call by reference example
// void addSix(int &score) {
//     score += 6;
//     cout << "Score after adding six is " << score << endl;
// }
