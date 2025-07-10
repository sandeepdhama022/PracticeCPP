#include <iostream> // Header file inclusion
using namespace std; // Namespace declaration
// Optional - Function prototype
// This function prototype declares a function named sayHello
void sayHello();

// Main function - Program entry point
int main(){
	// Output statement
	cout << "Hello from main!" << endl;
	sayHello(); // Function call
	return 0; // Return statement
}

// Optional : Function Definition
void sayHello(){
	cout << "Hello from sayHello function!" << endl;
}
// This function outputs a greeting message
// It is defined after the main function