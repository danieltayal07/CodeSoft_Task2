#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;
    char choice;

    cout << "Welcome to the Simple Calculator!" << endl;

    do {
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Enter operator (+, -, *, /, %): ";
        cin >> operation;

        if (operation == '+') {
            cout << "Result: " << num1 + num2 << endl;
        } else if (operation == '-') {
            cout << "Result: " << num1 - num2 << endl;
        } else if (operation == '*') {
            cout << "Result: " << num1 * num2 << endl;
        } else if (operation == '/') {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
        } else if (operation == '%') {
            if (num2 != 0) {
                cout << "Result: " << num1 % num2 << endl;
            } else {
                cout << "Error! Modulus by zero is not allowed." << endl;
            }
        } else {
            cout << "Invalid operator!" << endl;
        }

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Calculator Killed" << endl;

    return 0;
}
