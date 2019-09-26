/**
* explicar ifs
*/

#include <iostream>

using namespace std;

int main()
{
	bool t = true;
	bool f = false;

	int number;

	cin >> number;

	if (number == 5) {
		cout << "You have entered 5  \n";
	}
	else {
		cout << "You haven't entered 5  \n";
	}

	cin >> number;

	if (number == 1) 
		cout << 1 << endl;
	else if (number == 3)
		cout << "three" << endl;
	else
		cout << "other" << endl;

	if (t) {
		cout << "this will print" << endl;
	}
	else {
		cout << "this won't";
	}

	return 0;
}


