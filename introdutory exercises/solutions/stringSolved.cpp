/**
* Escolher dois nomes diferentes através de substring, para duas variáveis diferentes
* Concatenar os nomes numa única variável
* Mostrar essa variável no ecrã
* Descobrir o tamanho dessa nova string e mostrar também no ecrã
*/

#include <iostream>

using namespace std;

int main()
{
	char name1[256];
	cout << "Hey there, what's your full name?\n";
	cin.getline(name1, 256);
	string name = string(name1); //Nome de exemplo é Filipe Pinto Reis
	cout << name;

	string a = name.substr(0, 6);
	string b = name.substr(12, 17);

	string c = a + b;
	cout << endl << c << endl;

	cout << c.length() << endl;

	return 0;
}
