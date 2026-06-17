#include <iostream>
using namespace std;

int main() {
    // Assignment operator (=) assigns a value to a variable
    int x = 10;  // This assigns 10 to x
    
    // Equality operator (==) compares two values
    if (x == 10) {  // This checks if x equals 10
        cout << "x is equal to 10" << endl;
    }
    
    // Common mistake: using = instead of ==
    // if (x = 5) would assign 5 to x, not compare
    
    return 0;
}
