#include <iostream>
#include <vector>

int search(const vector<int> & v, int key) {
    
}

int main() {
    vector<int> v1 = {{2,3,5,7,8}};

    if (search({2,3,5,7,8}, 2) == 0) {
        cout << "Your program has passed the first test! " << "=> " << search({2,3,5,7,8}, 2) << " (answer) = " << 0 << " (result)" <<  endl;
    }
    else {
        cout << "Your program has failed the first test! " << "=> " << maxSubArray(v1) << " (answer) ≠ " << 0 << " (result)" <<  endl;
    }

    if (search({2,3,5,7,8}, 8) == 4) {
        cout << "Your program has passed the second test! " << "=> " << search({2,3,5,7,8}, 8) << " (answer) = " << 4 << " (result)" <<  endl;
    }
    else {
        cout << "Your program has failed the second test! " << "=> " << search({2,3,5,7,8}, 8) << " (answer) ≠ " << 4 << " (result)" <<  endl;
    }

    if (search({2,3,5,7,8}, 1) == -1) {
        cout << "Your program has passed the third test! " << "=> " << search({2,3,5,7,8}, 1) << " (answer) = " << -1 << " (result)" <<  endl;
    }
    else {
        cout << "Your program has failed the third test! " << "=> " << search({2,3,5,7,8}, 1) << " (answer) ≠ " << -1 << " (result)" <<  endl;
    }
}