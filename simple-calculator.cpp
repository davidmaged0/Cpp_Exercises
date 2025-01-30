#include <iostream>

using namespace std;

int main() 
{
    double num1, num2;
    char operator1;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: " ;
    cin >> operator1;
    cout << "Enter second number: " ;
    cin >> num2;

    switch (operator1)
    {
    case '+':
        cout << "Result: " << num1 + num2 << '\n';
        break;
    case '-':
        cout << "Result: " << num1 - num2 << '\n';
        break;
    case '*':
        cout << "Result: " << num1 * num2 << '\n';
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << '\n';
        } else {
            cout << "Error: Division by zero is not allowed." << '\n';
        }
        break;
    /*case '%':
        
        if (num2 != 0) {
            cout << "Result: " << (int)num1 % (int)num2 << '\n';
        } else {
            cout << "Error: Modulo by zero is not allowed." << '\n';
        }
        break;*/
    default:
        cout << "Error: Invalid operator." << '\n';
        break;
    }

    return 0;
}