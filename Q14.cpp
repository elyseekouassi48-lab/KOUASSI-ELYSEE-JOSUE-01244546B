#include <iostream>
using namespace std;

int main() {
    int num = 8;
    
    // Left shift (<<) shifts bits left, multiplying by 2^n
    int leftShift = num << 2;  // 8 << 2 = 32 (8 * 2^2)
    cout << "8 << 2 = " << leftShift << endl;
    
    // Right shift (>>) shifts bits right, dividing by 2^n
    int rightShift = num >> 2;  // 8 >> 2 = 2 (8 / 2^2)
    cout << "8 >> 2 = " << rightShift << endl;
    
    // More examples
    cout << "\nBinary representation of 8: 1000" << endl;
    cout << "8 << 1 = " << (8 << 1) << " (adds one zero: 10000 = 16)" << endl;
    cout << "8 >> 1 = " << (8 >> 1) << " (removes last bit: 100 = 4)" << endl;
    
    return 0;
}
