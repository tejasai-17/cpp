#include <iostream>

int main(){
    using namespace std;

    char op;
    double num1;
    double num2;
    double result;

    cout << "---Calculator---\n";

    cout << "Enter any operator +,-,*,/: ";
    cin >> op;

    cout << "Enter number1: ";
    cin >> num1;

    cout << "Enter number2: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "add: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        cout << "sub: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        cout << "mult: " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        cout << "div: " << result << "\n";
        break;
        
    default:
        cout << "Enter any operator only between (+,-,*,/)";
        break;
    }

    cout << "---END---";

}