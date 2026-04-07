#include <iostream>
#include <string>

int main() {
	std::string itemName;
	int price;

	std::cout << "Nome do item: ";
	std::cin >> itemName;

	std::cout << "Preço do item: ";
	std::cin >> price;

	if (0 <= price && price <= 10) {
		std::cout << "O item " << itemName << " é barato" << std::endl;
	} else if (10 < price && price <= 50) {
		std::cout << "O item " << itemName << " é médio" << std::endl;
	} else if (50 < price && price <= 100) {
		std::cout << "O item " << itemName << " é caro" << std::endl;
	} else if (price > 100){
		std::cout << "O item " << itemName << " é muito caro" << std::endl;
	} else {
		std::cout << "O item " << itemName << " tem preço inválido" << std::endl;
	}

	return 0;
}
