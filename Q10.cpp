#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    int larger = (a > b) ? a : b;
    cout << "The larger number is: " << larger << endl;
    
    return 0;
}
