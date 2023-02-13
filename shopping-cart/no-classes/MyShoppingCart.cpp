#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void printAndChooseOption(int& option, vector<string>& cartItems, vector<double>& prices) {
    vector<string> options = {
        "Sair do programa", 
        "Ver itens", 
        "Adicionar item", 
        "Atualizar item", 
        "Remover item"
    };

    for (int i = 0; i < options.size(); i++)
        cout << i << ". " << options.at(i) << endl;

    cout << "Escolha uma opcao (0-" << options.size() - 1 << "): ";
    cin >> option;
    cin.ignore(10000, '\n');
    cout << string(2, '\n');

    switch (option) {
    case 0:
        // TERMINAR O PROGRAMA
        cout << "Saindo do programa. Obrigado por escolher a nossa aplicacao!" << endl;
        break;
    case 1:
        // TODO: VER ITENS
        cout << "Funcionalidade ainda nao implementada!" << endl;
        break;
    case 2:
        // TODO: ADICIONAR ITEM
        cout << "Funcionalidade ainda nao implementada!" << endl;
        break;
    case 3:
        // TODO: ATUALIZAR ITEMS
        cout << "Funcionalidade ainda nao implementada!" << endl;
        break;
    case 4:
        // TODO: REMOVER ITEMS
        cout << "Funcionalidade ainda nao implementada!" << endl;
        break;
    default:
        break;
    }

    cout << string(2, '\n');
}

int main() {
    int option = -1;
    vector<string> cartItems;
    vector<double> prices;

    cout << "Bem-vindo ao MyShoppingCart!" << endl;
    printAndChooseOption(option, cartItems, prices);

    return 0;
}
