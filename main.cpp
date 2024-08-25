#include <iostream>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
    int choice;
    cout << "C++ Conversion Programs" << endl;
    cout << "1. Binary to Decimal" << endl;
    cout << "2. Binary to Octal" << endl;
    cout << "3. Octal to Decimal" << endl;
    cout << "4. Decimal to Octal" << endl;
    cout << "5. Hexadecimal to Decimal" << endl;
    cout << "6. Decimal to Hexadecimal" << endl;
    cout << "7. Decimal to Binary" << endl;
    cout << "8. Boolean to String" << endl;
    cout << "9. String to Double" << endl;
    cout << "10. Double to String" << endl;
    cout << "11. String to Long" << endl;
    cout << "12. Long to String" << endl;
    cout << "13. Int to Char" << endl;
    cout << "14. Char to Int" << endl;
    cout << "Enter your choice (1-14): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            // Binary to Decimal
            string binary;
            cout << "Enter a binary number: ";
            cin >> binary;
            int decimal = 0;
            for (int i = 0; i < binary.length(); i++) {
                decimal = decimal * 2 + (binary[i] - '0');
            }
            cout << "Decimal equivalent: " << decimal << endl;
            break;
        }
        case 2: {
            // Binary to Octal
            string binary;
            cout << "Enter a binary number: ";
            cin >> binary;
            int decimal = 0;
            for (int i = 0; i < binary.length(); i++) {
                decimal = decimal * 2 + (binary[i] - '0');
            }
            int octal[100];
            int i = 0;
            while (decimal != 0) {
                octal[i++] = decimal % 8;
                decimal /= 8;
            }
            cout << "Octal equivalent: ";
            for (int j = i - 1; j >= 0; j--) {
                cout << octal[j];
            }
            cout << endl;
            break;
        }
        case 3: {
            // Octal to Decimal
            int octal;
            cout << "Enter an octal number: ";
            cin >> octal;
            int decimal = 0;
            int base = 1;
            while (octal != 0) {
                decimal += (octal % 10) * base;
                base *= 8;
                octal /= 10;
            }
            cout << "Decimal equivalent: " << decimal << endl;
            break;
        }
        case 4: {
            // Decimal to Octal
            int decimal;
            cout << "Enter a decimal number: ";
            cin >> decimal;
            int octal[100];
            int i = 0;
            while (decimal != 0) {
                octal[i++] = decimal % 8;
                decimal /= 8;
            }
            cout << "Octal equivalent: ";
            for (int j = i - 1; j >= 0; j--) {
                cout << octal[j];
            }
            cout << endl;
            break;
        }
        case 5: {
            // Hexadecimal to Decimal
            string hex;
            cout << "Enter a hexadecimal number: ";
            cin >> hex;
            int decimal = 0;
            for (int i = 0; i < hex.length(); i++) {
                if (hex[i] >= '0' && hex[i] <= '9') {
                    decimal = decimal * 16 + (hex[i] - '0');
                } else if (hex[i] >= 'A' && hex[i] <= 'F') {
                    decimal = decimal * 16 + (hex[i] - 'A' + 10);
                } else if (hex[i] >= 'a' && hex[i] <= 'f') {
                    decimal = decimal * 16 + (hex[i] - 'a' + 10);
                }
            }
            cout << "Decimal equivalent: " << decimal << endl;
            break;
        }
        case 6: {
            // Decimal to Hexadecimal
            int decimal;
            cout << "Enter a decimal number: ";
            cin >> decimal;
            string hex;
            while (decimal != 0) {
                int remainder = decimal % 16;
                if (remainder < 10) {
                    hex = to_string(remainder) + hex;
                } else {
                    hex = string(1, 'A' + remainder - 10) + hex;
                }
                decimal /= 16;
            }
            cout << "Hexadecimal equivalent: " << hex << endl;
            break;
        }
        case 7: {
            // Decimal to Binary
            int decimal;
            cout << "Enter a decimal number: ";
            cin >> decimal;
            string binary;
            while (decimal != 0) {
                binary = to_string(decimal % 2) + binary;
                decimal /= 2;
            }
            cout << "Binary equivalent: " << binary << endl;
            break;
        }
        case 8: {
            // Boolean to String
            bool boolean;
            cout << "Enter a boolean value (true/false): ";
            cin >> boolalpha >> boolean;
            string str = boolean ? "true" : "false";
            cout << "String equivalent: " << str << endl;
            break;
        }
        case 9: {
            // String to Double
            string str;
            cout << "Enter a string: ";
            cin >> str;
            double dbl = stod(str);
            cout << "Double equivalent: " << dbl << endl;
            break;
        }
        case 10: {
            // Double to String
            double dbl;
            cout << "Enter a double value: ";
            cin >> dbl;
            string str = to_string(dbl);
            cout << "String equivalent: " << str << endl;
            break;
        }
        case 11: {
            // String to Long
            string str;
            cout << "Enter a string: ";
            cin >> str;
            long lng = stol(str);
            cout << "Long equivalent: " << lng << endl;
            break;
        }
        case 12: {
            // Long to String
            long lng;
            cout << "Enter a long value: ";
            cin >> lng;
            string str = to_string(lng);
            cout << "String equivalent: " << str << endl;
            break;
        }
        case 13: {
            // Int to Char
            int integer;
            cout << "Enter an integer: ";
            cin >> integer;
            char ch = static_cast<char>(integer);
            cout << "Char equivalent: " << ch << endl;
            break;
        }
        case 14: {
            // Char to Int
            char ch;
            cout << "Enter a character: ";
            cin >> ch;
            int integer = static_cast<int>(ch);
            cout << "Integer equivalent: " << integer << endl;
            break;
        }
        default:
            cout << "Invalid choice, Try again" << endl;
            break;
    }

    return 0;
}
