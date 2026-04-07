#include <iostream>
using namespace std;

int add(int first, int second) {
    // TODO
}

int subtract(int first, int second) {
    // TODO
}

// TODO: function multiply

// TODO: function divide

char getOperator() {
    // TODO
}

int getOperand() {
    // TODO
}

int performOperation(int first, int second, char op) {
    // TODO
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
