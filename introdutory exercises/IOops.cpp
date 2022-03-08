/**
* Explicar o que vari�veis s�o "caixas" onde se guardam coisas e que come�am vazias.
* Que h� caixas para guitarras, para violinos, enquanto em c++ h� vari�veis para inteiros, strings e booleanos
* Mandar refazer o programa para perguntar a idade, usando uma vari�vel de inteiro
*
*/

#include <iostream>

using namespace std;

int main()
{
	string variable;
	cout << "Hey there, what's your name?" << endl;
	cin >> variable;

	cout << "Hello " << variable << endl;
	return 0;
}
