#include <iostream>
using namespace std;

int main() {
    unsigned int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    // A number is power of 2 if it has only one bit set
    // So (num & (num-1)) will be 0 for powers of 2
    if (num > 0 && (num & (num - 1)) == 0) {
        cout << num << " is a power of 2" << endl;
    } else {
        cout << num << " is not a power of 2" << endl;
    }
    
    return 0;
}
