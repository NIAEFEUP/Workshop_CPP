#include <vector>
#include <chrono>
#include <iostream>
#include <algorithm>

using namespace std;

int function1(vector<int> values) {
    int total = 0;

    for (int i = 0; i < values.size(); ++i) {
        total += values.at(i);
    }

    return total;
}

int function2(vector<int> &values) {
    int total = 0;

    for (int i = 0; i < values.size(); ++i) {
        total += values.at(i);
    }

    return total;
}

int function3(vector<int> *values) {
    int total = 0;

    for (int i = 0; i < values->size(); ++i) {
        total += values->at(i);
    }

    return total;
}

int main() {
    vector<int> values(100000000);
    auto f = []() -> int { return rand() % 10000; };

    generate(values.begin(), values.end(), f);


    auto start = chrono::high_resolution_clock::now();
    function1(values);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    cout << "Time taken by function 1: "
         << duration.count() << " milliseconds" << endl;

    start = chrono::high_resolution_clock::now();
    function2(values);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    cout << "Time taken by function 2: "
         << duration.count() << " milliseconds" << endl;

    start = chrono::high_resolution_clock::now();
    function3(&values);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    cout << "Time taken by function 3: "
         << duration.count() << " milliseconds" << endl;
}