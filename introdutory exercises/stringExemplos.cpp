/**
* Explicar como concaternar, fazer substrings e tirar a length 
*
*/

#include <iostream>

using namespace std;

int main()
{
	string a = "Ola";
	string b = "Joao";
	string c = a + " " + b;
	cout << c << endl;

	string d = "Tres tristes tigres";
	string e = d.substr(5, 7);
	cout << e << endl;

	cout << "O tamanho da variavel e e' " << e.size();

	return 0;
}
