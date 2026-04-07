#include <iostream>
#include <string>

using namespace std;

float get_ratio(float price, float cost) {
	return price / cost;
}

int get_tax(float price, float cost) {
	float ratio = get_ratio(price,cost);
	int tax = 0;
	if (ratio >= 2) {
		tax = price * 0.10;
	}
	return tax;
}

void apply_tax(float &price, int tax) {
	price = price + tax;
}

int main() {
	std::string itemName;
	float price;
	float cost;

	std::cout << "Nome do item: ";
	std::cin >> itemName;
	std::cout << "Preço do item: ";
	std::cin >> price;
	std::cout << "Custo do item: ";
	std::cin >> cost;

	cout << "O preço original do item é " << price << endl;

	int tax = get_tax(price,cost);
	apply_tax(price,tax);
	
	cout << "O novo preço do item é " << price << endl;

	return 0;
}
