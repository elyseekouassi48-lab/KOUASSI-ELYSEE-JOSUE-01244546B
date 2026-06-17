#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
#include <iomanip>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

// Function to convert decimal to hexadecimal
string decimalToHexadecimal(int decimal) {
    string hex = "";
    
    if (decimal == 0) return "0";
    
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hex = char(remainder + '0') + hex;
        } else {
            hex = char(remainder - 10 + 'A') + hex;
        }
        decimal /= 16;
    }
    return hex;
}

// Function to convert decimal to octal
string decimalToOctal(int decimal) {
    string octal = "";
    
    if (decimal == 0) return "0";
    
    while (decimal > 0) {
        octal = char(decimal % 8 + '0') + octal;
        decimal /= 8;
    }
    return octal;
}

// Function to convert hexadecimal to octal
string hexadecimalToOctal(string hex) {
    // First convert hex to decimal
    int decimal = 0;
    int power = 0;
    
    for (int i = hex.length() - 1; i >= 0; i--) {
        int digit;
        if (hex[i] >= '0' && hex[i] <= '9') {
            digit = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            digit = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            digit = hex[i] - 'a' + 10;
        }
        decimal += digit * pow(16, power);
        power++;
    }
    
    // Then convert decimal to octal
    return decimalToOctal(decimal);
}

int main() {
    int choice;
    string binary, hex;
    int decimalNum;
    
    cout << "===== Conversion Calculator =====" << endl;
    cout << "1. Binary to Decimal" << endl;
    cout << "2. Binary to Hexadecimal" << endl;
    cout << "3. Binary to Octal" << endl;
    cout << "4. Hexadecimal to Octal" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter binary number: ";
            cin >> binary;
            cout << "Decimal: " << binaryToDecimal(binary) << endl;
            break;
            
        case 2:
            cout << "Enter binary number: ";
            cin >> binary;
            decimalNum = binaryToDecimal(binary);
            cout << "Hexadecimal: " << decimalToHexadecimal(decimalNum) << endl;
            break;
            
        case 3:
            cout << "Enter binary number: ";
            cin >> binary;
            decimalNum = binaryToDecimal(binary);
            cout << "Octal: " << decimalToOctal(decimalNum) << endl;
            break;
            
        case 4:
            cout << "Enter hexadecimal number: ";
            cin >> hex;
            cout << "Octal: " << hexadecimalToOctal(hex) << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
