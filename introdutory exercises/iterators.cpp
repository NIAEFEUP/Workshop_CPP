#include <iostream>
#include <vector>
    
using namespace std;
    
int main() {
    vector<int> numbers {10, 20, 30}; // inicialização do vetor com 3 elementos

    // o iterador begin() aponta para o primeiro elemento da função
    vector<int>::iterator it = numbers.begin();
    cout << "First element: " << *it << endl;

    it = numbers.end() - 1;
    cout << "Last element: " << *it << endl;

    // iteração sobre o vetor usando iteradores
    cout << "Vector elements:";
    for (it = numbers.begin(); it != numbers.end(); it++)
        cout << " " << *it;
    cout << endl;

    // elimina o segundo elemento do vetor (20)
    numbers.erase(numbers.begin() + 1);

    cout << "Vector elements:";
    for (it = numbers.begin(); it != numbers.end(); it++)
        cout << " " << *it;
    cout << endl;    

    // adição do valor 0 ao início do vetor
    numbers.insert(numbers.begin(), 0);

    cout << "Vector elements:";
    for (it = numbers.begin(); it != numbers.end(); it++)
        cout << " " << *it;
    cout << endl;
    
    return 0;
} 