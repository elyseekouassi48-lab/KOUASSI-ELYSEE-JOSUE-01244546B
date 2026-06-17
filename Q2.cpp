#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159265359;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    double area = PI * pow(radius, 2);
    cout << "Area of the circle: " << area << endl;
    
    return 0;
}
