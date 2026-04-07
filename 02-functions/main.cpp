#include <iostream>
#include <string>

using namespace std;

float get_ratio(int price, int cost) {
	// TODO
	// Hint: Be careful with integer division!
}

int main() {
	// Declare variables for item name, price and cost
	std::string itemName;
	int price;
	int cost;

	std::cout << "Nome do item: ";
	std::cin >> itemName;
	std::cout << "Preço do item: ";
	std::cin >> price;
	std::cout << "Custo do item: ";
	std::cin >> cost;


	float ratio = 0; // TODO: replace to function call

	cout << "A razão entre preço e custo do produto " << itemName << " é " << ratio << endl;

	return 0;
}
