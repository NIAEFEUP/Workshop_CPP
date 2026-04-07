#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Product {
	string name;
	float price;
	float cost;
};

float get_ratio(float price, float cost) {
	return price / cost;
}

float get_tax(float price, float cost) {
	float ratio = get_ratio(price, cost);
	float tax = 0;
	if (ratio > 2) {
		tax = price * 0.10;
	}
	return tax;
}

void apply_tax(Product &product) {
	float tax = get_tax(product.price, product.cost);
	product.price = product.price + tax;
}

// Hint: Use a for loop to apply the tax on products and calculate the total
float calculate_total(vector<Product> &products) {
	// TODO
}

void print_products(vector<Product> &products) {
	cout << "Products:" << endl;
	for (int i = 0; i < products.size(); i++) {
		cout << "  " << products[i].name << " - Price: " << products[i].price << " euros, Cost: " << products[i].cost << " euros" << endl;
	}
	cout << endl;
}

int main() {
	vector<Product> products = {
		{"Apple", 1.50, 0.50},
		{"Mango", 2.00, 0.60},
		{"Banana", 0.80, 0.30},
		{"Cucumber", 1.20, 0.50},
		{"Orange", 1.00, 0.40}
	};

	print_products(products);

	float total = calculate_total(products);

	cout << "Total: " << total << " euros" << endl;

	return 0;
}
