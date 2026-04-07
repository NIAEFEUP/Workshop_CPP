#include <iostream>

using namespace std;

int main() {
    int choice;
    cin >> choice;

    // break em falta em todos os case exceto o primeiro
    switch (choice) {
    case 1: 
        cout << "First item selected!" << endl;
        break;
    case 2:
        cout << "Second item selected!" << endl;
    case 3:
        cout << "Third item selected!" << endl;
    default:
        cout << "Invalid selection :(" << endl;
        break;
    }

    return 0;
}