#include <iostream>
#include <string>

using namespace std;

float get_ratio(float price, float cost) {
	return price / cost;
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


	float ratio = get_ratio(price,cost);

	cout << "A razão entre preço e custo do produto " << itemName << " é " << ratio << endl;

	return 0;
}
