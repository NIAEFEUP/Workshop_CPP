#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int maxSubArray(const vector<int> & v) {
   
}

int main() {
    vector<int> v1 = {-1, 4, -2, 5, -5, 2, -20, 6};
    vector<int> v2 = {-2, -1, -3};
    vector<int> v3 = {2, 4, 6, 8, 10};

    if (maxSubArray(v1) == 7) {
        cout << "Your program has passed the v1 test! " << "=> " << maxSubArray(v1) << " (answer) = " << 7 << " (result)" <<  endl;
    }
    else {
        cout << "Your program has failed the v1 test! " << "=> " << maxSubArray(v1) << " (answer) ≠ " << 7 << " (result)" <<  endl;
    }

    if (maxSubArray(v2) == -1) {
        cout << "Your program has passed the v2 test! " << "=> " << maxSubArray(v2) << " (answer) = " << -1 << " (result)" <<  endl;
    }
    else {
        cout << "Your program has failed the v2 test! " << "=> " << maxSubArray(v2) << " (answer) ≠ " << -1 << " (result)" <<  endl;
    }

    if (maxSubArray(v3) == 30) {
        cout << "Your program has passed the v3 test! " << "=> " << maxSubArray(v3) << " (answer) = " << 30 << " (result)" <<  endl;
    }
    else {
        cout << "Your program has failed the v3 test! " << "=> " << maxSubArray(v3) << " (answer) ≠ " << 30 << " (result)" <<  endl;
    }
}