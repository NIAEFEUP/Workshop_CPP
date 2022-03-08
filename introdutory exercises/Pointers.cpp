#include <iostream>

using namespace std;


int main() {
    int res;
    res = function1();

    cout << "Res 1: " << res << endl;

    function2(res);
    cout << "Res 2: " << res << endl;

    function3(&res);
    cout << "Res 3: " << res << endl;

}