#include <iostream>
using namespace std;

int main() {
    // Increment operator (++) increases value by 1
    int x = 5;
    x++;  // x becomes 6
    cout << "After increment: " << x << endl;
    
    // Decrement operator (--) decreases value by 1
    int y = 5;
    y--;  // y becomes 4
    cout << "After decrement: " << y << endl;
    
    // Post-increment vs Pre-increment
    int a = 5, b = 5;
    cout << "Post-increment: " << a++ << " (a becomes " << a << ")" << endl;
    cout << "Pre-increment: " << ++b << endl;
    
    return 0;
}
