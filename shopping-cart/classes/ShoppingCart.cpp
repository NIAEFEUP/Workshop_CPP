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
    vector <Item> cart;
public:
    double sumPrices() {
        double sum = 0;

        for (int i = 0; i < cart.size(); i++) {
            Item item = cart.at(i);
            sum += item.getPrice();
        }

        return sum;
    }
    
    void printItems() {
        int size = cart.size();
        double total = sumPrices();

        cout << "ITENS NO CARRINHO DE COMPRAS" << endl;

        if (size == 0) {
            cout << "O carrinho de compras está vazio!" << endl;
        }


        for (int i = 0; i < size; i++) {
            Item item = cart.at(i);
            string name = item.getName();
            double price = item.getPrice();

            cout << i + 1 << " - " << name << " - " << price << "€" << endl;
        }

        cout << "Total: " << total << "€" << endl;
    }

    void addItem() {
        string newName;
        double price;

        cout << "Novo Item: ";
        getline(cin, newName);

        cout << "Preço (€): ";
        cin >> price;

        Item item(newName, price);

        cart.push_back(item);

        cout << "Adicionado item: " << newName << endl;
    }

    void removeItem() {
        int id;

        cout << "ID do item a remover: ";
        cin >> id;

        if (id < 0 || id > cart.size()) {
            cout << "Esse item não existe!" << endl;
            return;
        }

        Item item = cart.at(id - 1);
        cart.erase(cart.begin() + id - 1);

        cout << "Removido item: " << item.getName() << endl;
    }

    void updateItem() {
        int id;

        cout << "ID do item a atualizar: ";
        cin >> id;
        cin.ignore(10000, '\n');

        if (id < 0 || id > cart.size()) {
            cout << "Esse item não existe!" << endl;
            return;
        }

        string oldName = cart.at(id - 1).getName();

        string newName;
        cout << "Novo item: ";
        getline(cin, newName);

        double newPrice;
        cout << "Novo preço (€): ";
        cin >> newPrice;

        Item newItem(newName, newPrice);

        cart.at(id - 1) = newItem;

        cout << "Atualizado item " << oldName << " para " << newName << endl;
    }

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
                printItems();
                break;
            case 2:
                addItem();
                break;
            case 3:
                updateItem();
                break;
            case 4:
                removeItem();
                break;
            default:
                cout << "Opção não existente!" << endl;
                break;
        }

        cout << endl << endl;
    }
};

int main() {
    int option = -1;
    string name;

    cout << "Bem-vindo ao MyShoppingCart!" << endl;
    cout << "Qual é o teu nome? ";
    getline(cin, name);
    cout << "Olá " << name << "!" << endl;

    ShoppingCart shoppingCart;

    while (option != 0)
        shoppingCart.printAndChooseOption(option);

    return 0;
}
