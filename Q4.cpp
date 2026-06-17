#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string input;
    
    cout << "Enter a string: ";
    cin >> input;
    
    if (input == "hello") {
        cout << "Hello!" << endl;
    } else {
        cout << "Goodbye!" << endl;
    }
    
    return 0;
}
