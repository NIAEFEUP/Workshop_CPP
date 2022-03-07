#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Item {
private:
    string name;
    double price;
public:
    Item(string name, double price) : name(name), price(price) {};

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }
};

class ShoppingCart {
private:
public:
    void printAndChooseOption(int &option) {
        vector <string> options{
                "Sair do programa", // 0
                "Ver itens", // 1
                "Adicionar item", // 2
                "Atualizar item", // 3
                "Remover item" // 4
        };

        for (int i = 0; i < options.size(); i++) {
            cout << i << ". " << options.at(i) << endl;
        }

        cout << "Escolha uma opção (0-" << options.size() - 1 << "): ";

        // LER INPUT DE OPCAO - option

        cout << endl << endl;


        // USAR SWITCH CASE

        // CASO 0 - TERMINAR O PROGRAMA - "Saindo do programa. Obrigado por escolher a nossa aplicação!"
        // CASO 1 - VER ITENS
        // CASO 2 - ADICIONAR ITEM
        // CASO 3 - ATUALIZAR ITEMS
        // CASO 4 - REMOVER ITEMS

        cout << endl << endl;
    }
};

int main() {
    // DECLARAÇÂO DAS VARIÀVEIS PRINCIPAIS

    string name;

    cout << "Bem-vindo ao MyShoppingCart!" << endl;
    cout << "Qual é o teu nome? ";
    getline(cin, name);
    cout << "Olá " << name << "!" << endl;

    return 0;
}
