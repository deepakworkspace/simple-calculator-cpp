#include <iostream>
#include <iomanip> // For formatted output
using namespace std;

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2, result;
    char operation;
    char choice;

    cout << fixed << setprecision(2); // Format output to 2 decimal places

    do {
        // Input
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        // Operation selection with error handling
        switch (operation) {
            case '+':
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    result = divide(num1, num2);
                    cout << "Result: " << result << endl;
                }
                break;
            default:
                cout << "Invalid operator. Please try again." << endl;
        }

        // Ask user if they want to perform another calculation
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the calculator!" << endl;
    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}
