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

float calculate_total(vector<string> &names, vector<float> &prices, vector<float> &costs) {
	float total = 0;
	for (int i = 0; i < prices.size(); i++) {
		apply_tax(prices[i], costs[i]);
		cout << names[i] << ": " << prices[i] << " euros" << endl;
		total += prices[i];
	}
	return total;
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

	cout << "Prices (with tax):" << endl;
	cout << "----------------------------------------" << endl;

	float total = calculate_total(productNames, productPrices, productCosts);

	cout << "----------------------------------------" << endl;
	cout << "Total: " << total << " euros" << endl;

	return 0;
}
