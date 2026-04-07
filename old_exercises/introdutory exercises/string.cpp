/**
* Demonstrar como o cin para de ler a input string quando encontra um espaço; explicar porque acontece
*/

#include <iostream>

using namespace std;

int main()
{
	char name1[256];
	cout << "Hey there, what's your full name?\n";
	cin.getline(name1, 256);
	string name = string(name1);
	cout << name;


	return 0;
}
