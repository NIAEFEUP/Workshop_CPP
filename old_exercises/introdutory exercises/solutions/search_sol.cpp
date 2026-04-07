#include <iostream>
#include <vector>

using namespace std;

int search(const vector<int> & v, int key) {
    int low = 0, high = (int)v.size() - 1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == key) {
            return i;
        }
    }
    return -1;
}

// AED sneak peek
int binarySearch(const vector<int> & v, int key) {
    int low = 0, high = (int)v.size() - 1;
    while (low <= high) {
        int middle = low + (high - low) / 2;
        if (key < v[middle]) {
            high = middle - 1;
        }
        else if (key > v[middle]) {
            low = middle + 1;
        }
        else return middle;
    }
    return -1;
}

int main() {
    vector<int> v1 = {{2,3,5,7,8}};

    if (search({2,3,5,7,8}, 2) == 0) {
        cout << "Your program has passed the first test! " << "=> " << search({2,3,5,7,8}, 2) << " (answer) = " << 0 << " (result)" <<  endl;
    }
    else {
        cout << "Your program has failed the first test! " << "=> " << search({2,3,5,7,8}, 2) << " (answer) ≠ " << 0 << " (result)" <<  endl;
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
