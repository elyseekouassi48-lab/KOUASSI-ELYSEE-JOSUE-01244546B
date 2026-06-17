#include <iostream>
using namespace std;

int main() {
    float a, b;
    
    cout << "Enter two floating point numbers: ";
    cin >> a >> b;
    
    float larger = (a > b) ? a : b;
    cout << "The larger number is: " << larger << endl;
    
    return 0;
}
