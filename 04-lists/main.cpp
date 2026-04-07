#include <iostream>
#include <string>

using namespace std;

const int SIZE_LIST = 5;

// Hint: Use nested loops to compare each element with the others
// Hint: Start the inner loop at i + 1 to avoid comparing an element with itself
string get_duplicate(string[] items) {
	// TODO
}


void print_list(string items[]) {
	cout << "[";
	for (int i = 0; i < SIZE_LIST; i++) {
		cout << items[i];
		if (i < SIZE_LIST - 1) {
			cout << ", ";
		}
	}
	cout << "]" << endl;
}

int main() {
	string items[5] = {"Apple", "Mango", "Banana", "Cucumber", "Mango"};
	string items1[5] = {"Apple", "Banana", "Cucumber", "Banana", "Mango"};
	string items2[5] = {"Apple", "Banana", "Cucumber", "Cucumber", "Mango"};

	cout << "First list: ";
	print_list(items);
	string duplicate  = get_duplicate(items);

	cout << "Second list: ";
	print_list(items1);
	string duplicate1 = get_duplicate(items1);

	cout << "Third list: ";
	print_list(items2);
	string duplicate2 = get_duplicate(items2);

	cout << endl;
	cout << "Duplicate for first list: "  << duplicate << endl;
	cout << "Duplicate for second list: " << duplicate1 << endl;
	cout << "Duplicate for third list: "  << duplicate2 << endl;

	return 0;
}
