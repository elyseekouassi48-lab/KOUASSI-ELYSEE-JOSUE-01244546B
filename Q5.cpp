#include <iostream>
using namespace std;

int main() {
    int first, second;
    
    cout << "Enter first integer: ";
    cin >> first;
    cout << "Enter second integer: ";
    cin >> second;
    
    if (first > second) {
        cout << "First value is greater" << endl;
    } else if (second > first) {
        cout << "Second value is greater" << endl;
    } else {
        cout << "Both values are equal" << endl;
    }
    
    return 0;
}
