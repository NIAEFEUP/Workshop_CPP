#include <iostream>
#include <string>

using namespace std;

float get_ratio(float price, float cost) {
	return price / cost;
}

// If the ratio between price and cost is > 2
// the tax will be 10% of the product price
// else it will be 0
int get_tax(float price, float cost) {
	// TODO
}

// Hint: Remember how pointers work
// DON'T CHANGE THE RETURN TYPE OF THIS FUNCTION
void apply_tax(float &price, int tax) {
	// TODO
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
