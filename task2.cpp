#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << " Divided by zero";
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            }
            break;
        default:
            cout << " Invalid operator";
    }

    return 0;
}
