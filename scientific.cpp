#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "Scientific Calculator\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exponentiation\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        if (choice >= 1 && choice <= 5) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero!" << endl;
                } else {
                    cout << "Result: " << num1 / num2 << endl;
                }
                break;
            case 5:
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (true);

    return 0;
}
