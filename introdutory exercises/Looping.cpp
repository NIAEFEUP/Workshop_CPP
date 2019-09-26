/**
* explicar fors e whiles
*
*/

#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 5; i++) {
		cout << "hello";
	}

	int k = 0;

	while (k != 3) {
		cout << "hello";
		k++; 
	}

	int a = 0;
	do {
		cout << "hello";
		a++;
	} while (a != 3);

	return 0;
}


