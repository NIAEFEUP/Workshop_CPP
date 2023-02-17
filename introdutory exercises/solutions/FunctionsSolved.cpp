#include <iostream>
using namespace std;

int add(int first, int second) {
    return first + second;
}

int subtract(int first, int second) {
    return first - second;
}

int multiply(int first, int second) {
    return first * second;
}

int divide(int first, int second) {
    return first / second;
}

char getOperator() {
   char operation;
   cout << "Insert operation: "; 
   cin >> operation;
   return operation;
}

int getOperand() {
    int operand;
    cout << "Insert operand: ";
    cin >> operand;
    return operand;
}

int performOperation(int first, int second, char op) {
    switch (op) {
    case '+':
        return add(first, second);
        break;
    case '-':
        return subtract(first, second);
        break;
    case '*':
        return multiply(first, second);
        break;
    case '/':
        return divide(first, second);
        break;
    default:
        break;
    }
    return 0;
}

int main() {
    int n1, n2;
    char op;

    n1 = getOperand();
    op = getOperator();
    n2 = getOperand();
    
    int res = performOperation(n1, n2, op);
    cout << n1 << op << n2 << "=" << res << endl;
    return 0;
}
