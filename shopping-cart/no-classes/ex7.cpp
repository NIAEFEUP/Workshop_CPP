#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

/*
    Imprime as opções disponíveis para o ecrã, pede a opção desejada pelo utilizador, 
    e chama o código responsável pela mesma.
*/
void printAndChooseOption(int &option, vector<string> &cartItems, vector<double> &prices)
{
    vector<string> options{"Sair do programa", "Ver itens", "Adicionar item", "Atualizar item", "Remover item"};
    string newItem;
    double price;
    int size = cartItems.size();
    int id;
    string item;

    for (int i = 0; i < options.size(); i++)
    {
        cout << i << ". " << options.at(i) << endl;
    }

    cout << "Escolha uma opção (0-" << options.size() - 1 << "): ";

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

        cout << "ITENS NO CARRINHO DE COMPRAS" << endl;

        if (size == 0)
        {
            cout << "O carrinho de compras está vazio!" << endl;
        }

        for (int i = 0; i < size; i++)
        {
            cout << i + 1 << " - " << cartItems.at(i) << " - " << prices.at(i) << "€" << endl;
        }

        break;
    case 2:
        // ADICIONAR ITEM
        cout << "Novo Item: ";
        getline(cin, newItem);

        cout << "Preço (€): ";
        cin >> price;
        
        cartItems.push_back(newItem);
        prices.push_back(price);

        cout << "Adicionado item: " << newItem << endl;
        break;
    case 3:
        // ATUALIZAR ITEMS
        cout << "Funcionalidade ainda não implementada!" << endl;
        break;
    case 4:
        // REMOVER ITEMS
        cout << "ID do item a remover: ";
        cin >> id;

        item = cartItems.at(id - 1);
        cartItems.erase(cartItems.begin() + id - 1);
        prices.erase(prices.begin() + id - 1);

        cout << "Removido item: " << item << endl;
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
    vector<string> cartItems;
    vector<double> prices;
    string name;

    cout << "Bem-vindo ao MyShoppingCart!" << endl;
    cout << "Qual é o teu nome? ";
    getline(cin, name);
    cout << "Olá " << name << "!" << endl;

    while (option != 0)
        printAndChooseOption(option, cartItems, prices);

    return 0;
}
