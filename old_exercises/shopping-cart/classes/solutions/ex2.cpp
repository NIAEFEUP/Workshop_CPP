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
                "Sair do programa",
                "Ver itens",
                "Adicionar item",
                "Atualizar item",
                "Remover item"
        };

        for (int i = 0; i < options.size(); i++) {
            cout << i << ". " << options.at(i) << endl;
        }

        cout << "Escolha uma opção (0-" << options.size() - 1 << "): ";

        cin >> option;
        cin.ignore(10000, '\n');
        cout << endl << endl;

        switch (option) {
            case 0:
                // TERMINAR O PROGRAMA
                cout << "Saindo do programa. Obrigado por escolher a nossa aplicação!" << endl;
                break;
            case 1:
                // VER ITENS
                break;
            case 2:
                // ADICIONAR ITEM
                break;
            case 3:
                // ATUALIZAR ITEMS
                break;
            case 4:
                // REMOVER ITEMS
                break;
            default:
                cout << "Opção não existente!" << endl;
                break;
        }

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
