#include <iostream>

using namespace std;


int function1() {
    int variable;
    cout << "Hey there, what's your age?" << endl;
    cin >> variable;
    cout << "You are " << variable << " years old" << endl;
    return variable;
}

void function2(int &variable) {
    cout << "Hey there, what's your age?" << endl;
    cin >> variable;
    cout << "You are " << variable << " years old" << endl;

}

void function3(int* variable) {
    int temp;
    cout << "Hey there, what's your age?" << endl;
    cin >> temp;
    *variable = temp;
    cout << "You are " << *variable << " years old" << endl;
}

int main() {
    int res;
    res = function1();

    cout << "Res 1: " << res << endl;

    function2(res);
    cout << "Res 2: " << res << endl;

    function3(&res);
    cout << "Res 3: " << res << endl;

}