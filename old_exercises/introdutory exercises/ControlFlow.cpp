#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	// testa se um numero e igual a 5
	if (number == 5) {
		cout << "five\n";
	}
	else {
		cout << "not five\n";
	}

	int a, b;
	cin >> a >> b;

	// testa qual dos numeros dados por input e maior
	if (a < b) {
		cout << "a is lower than b" << endl;
	}
	else if (a > b) {
		cout << "b is higher than a" << endl;
	}
	else {
		cout << "a is equal to b" << endl;
	}

	// testa condicao que e sempre verdadeira
	if (true && 1 < 2) {
		cout << "this will print" << endl;
	}
	else {
		cout << "this won't";
	}

	return 0;
}
