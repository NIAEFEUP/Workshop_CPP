#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

void apply_tax(float &price, float cost) {
	float tax = get_tax(price, cost);
	price = price + tax;
}

// Hint: Use a for loop to apply the tax on products and the total
float calculate_total(vector<string> &names, vector<float> &prices, vector<float> &costs) {
	// TODO
}

void print_vectors(vector<string> &names, vector<float> &prices, vector<float> &costs) {
	cout << "Products:" << endl;
	for (int i = 0; i < names.size(); i++) {
		cout << "  " << names[i] << " - Price: " << prices[i] << " euros, Cost: " << costs[i] << " euros" << endl;
	}
	cout << endl;
}

int main() {
	vector<string> productNames = {"Apple", "Mango", "Banana", "Cucumber", "Orange"};
	vector<float> productPrices = {1.50, 2.00, 0.80, 1.20, 1.00};
	vector<float> productCosts = {0.50, 0.60, 0.30, 0.50, 0.40};

	print_vectors(productNames, productPrices, productCosts);

	float total = calculate_total(productNames, productPrices, productCosts);

	cout << "Total: " << total << " euros" << endl;

	return 0;
}
