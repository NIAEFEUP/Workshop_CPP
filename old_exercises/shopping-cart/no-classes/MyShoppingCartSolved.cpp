#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void viewItems(vector<string>& cartItems, vector<double>& prices) {
    cout << "ITENS NO CARRINHO DE COMPRAS" << endl;

    if (cartItems.empty())
        cout << "O carrinho encontra-se vazio :(" << endl;

    for (int i = 0; i < cartItems.size(); i++)
        cout << i + 1 << " - " << cartItems[i] << " - " << prices[i] << endl;
}

void addItem(vector<string>& cartItems, vector<double>& prices) {
    string item;
    double price;

    cout << "Novo item: ";
    cin >> item;
    cout << "Preco: ";
    cin >> price;
    cout << "Adicionado item: " << item << endl;

    cartItems.push_back(item);
    prices.push_back(price);
}

void removeItem(vector<string>& cartItems, vector<double>& prices) {
    int itemID;
    cout << "ID do item a remover: ";
    cin >> itemID;

    if (itemID > cartItems.size()) {
        cout << "O item nao existe! :(" << endl;
        return;
    }
    int index = itemID - 1;
    cout << "Removido item: " << cartItems[index] << endl;

    cartItems.erase(cartItems.begin() + index);
    prices.erase(prices.begin() + index);
}

void updateItem(vector<string>& cartItems, vector<double>& prices) {
    int itemID;
    string newItem;
    double newPrice;

    cout << "ID do item a atualizar: ";
    cin >> itemID;

    if (itemID > cartItems.size()) {
        cout << "O item nao existe! :(" << endl;
        return;
    }
    cout << "Novo item: ";
    cin >> newItem;
    cout << "Novo preco: ";
    cin >> newPrice;
    int index = itemID - 1;
    cout << "Atualizado item " << cartItems[index] << " para " << newItem << endl;

    cartItems[index] = newItem;
    prices[index] = newPrice;
}

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
        cout << "Saindo do programa. Obrigado por escolher a nossa aplicacao!" << endl;
        break;
    case 1:
        viewItems(cartItems, prices);
        break;
    case 2:
        addItem(cartItems, prices);
        break;
    case 3:
        updateItem(cartItems, prices);
        break;
    case 4:
        removeItem(cartItems, prices);
        break;
    default:
        cout << "Opcao nao existente!" << endl;
        break;
    }

    cout << string(2, '\n');
}

int main() {
    int option = -1;
    vector<string> cartItems;
    vector<double> prices;

    cout << "Bem-vindo ao MyShoppingCart!" << endl;

    while (option != 0)
        printAndChooseOption(option, cartItems, prices);

    return 0;
}
