#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

/*
    Imprime as opções disponíveis para o ecrã, pede a opção desejada pelo utilizador, 
    e chama o código responsável pela mesma.
*/
void printAndChooseOption(int &option, vector<string> &listItems, vector<double> &prices)
{
    vector<string> options{"Sair do programa", "Ver itens", "Adicionar item", "Atualizar item", "Remover item"};

    for (int i = 0; i < options.size(); i++)
    {
        cout << i << ". " << options.at(i) << endl;
    }

    cout << "Escolha uma opção (0-" << options.size() << "): ";

    cin >> option;
    cin.ignore(10000, '\n');
    cout << string(2, '\n');

    switch (option)
    {
    case 0:
        // TERMINAR O PROGRAMA
        cout << "Saindo do programa. Obrigado por escolher a nossa aplicação!" << endl;
        break;
    case 1:
        // VER ITENS
        cout << "Funcionalidade ainda não implementada!" << endl;
        break;
    case 2:
        // ADICIONAR ITEM
        cout << "Funcionalidade ainda não implementada!" << endl;
        break;
    case 3:
        // ATUALIZAR ITEMS
        cout << "Funcionalidade ainda não implementada!" << endl;
        break;
    case 4:
        // REMOVER ITEMS
        cout << "Funcionalidade ainda não implementada!" << endl;
        break;
    default:
        cout << "Opção não existente!" << endl;
        break;
    }

    cout << string(2, '\n');
}

int main()
{
    // DECLARAÇÂO DAS VARIÀVEIS PRINCIPAIS

    int option = -1;
    vector<string> listItems;
    vector<double> prices;
    string name;

    cout << "Bem-vindo à MyShoppingList!" << endl;
    cout << "Qual é o teu nome? ";
    getline(cin, name);
    cout << "Olá " << name << "!" << endl;

    while (option != 0)
        printAndChooseOption(option, listItems, prices);

    return 0;
}
