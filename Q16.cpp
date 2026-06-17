#include <iostream>
using namespace std;

int main() {
    int x = 5;
    
    // Bitwise NOT (~) flips all bits of the number
    int bitwiseNot = ~x;
    cout << "Bitwise NOT of " << x << " is: " << bitwiseNot << endl;
    
    // Logical NOT (!) returns true (1) if value is false (0), and false (0) otherwise
    int logicalNot = !x;
    cout << "Logical NOT of " << x << " is: " << logicalNot << endl;
    
    // Example with 0
    int y = 0;
    cout << "\nWith y = 0:" << endl;
    cout << "Bitwise NOT of " << y << " is: " << ~y << endl;
    cout << "Logical NOT of " << y << " is: " << !y << endl;
    
    return 0;
}
