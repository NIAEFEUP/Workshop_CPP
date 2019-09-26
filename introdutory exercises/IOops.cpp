/**
* Explicar o que variáveis são "caixas" onde se guardam coisas e que começam vazias.
* Que há caixas para guitarras, para violinos, enquanto em c++ há variáveis para inteiros, strings e booleanos
* Mandar refazer o programa para perguntar a idade, usando uma variável de inteiro
*
*/

#include <iostream>

using namespace std;

int main()
{
	string variable;
	cout << "Hey there, what's your name?\n";
	cin >> variable;

	cout << "\nHello " << variable << "\n";
	return 0;
}
