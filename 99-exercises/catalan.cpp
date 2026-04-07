// Exercise 3: Catalan Numbers
// Catalan numbers are a sequence of natural numbers that appear in many counting problems.
//
// The first Catalan number is C_1 = 1, and the n-th Catalan number is given by:
//   C_n = (2n)! / ((n+1)! * n!)
//
// Alternatively: C_n = (2n)*(2n-1)*(2n-2)*...*(n+1) / (n+1)!
//
// Examples:
//   C_2 = (2*2)*(2*2-1) / (2+1)! = 4*3 / 6 = 2
//   C_3 = (2*3)*(2*3-1)*(2*3-2) / (3+1)! = 6*5*4 / 24 = 5
//
// Function signature:
//   int catalan_number(int in)
//
// Requirements:
// - Receives an integer 'in' indicating the index of the Catalan number
// - Returns the corresponding Catalan number
// - catalan_number(2) should return 2 (the second Catalan number)
// - catalan_number(3) should return 5 (the third Catalan number)
//
// Hint: Define a separate function that calculates the factorial of a number.

#include <iostream>

// TODO: Implement factorial function
// long long factorial(int n)

// TODO: Implement catalan_number function
int catalan_number(int in) {
    // TODO: Calculate and return the n-th Catalan number
    // Formula: C_n = (2n)! / ((n+1)! * n!)
    return 0;
}

int main() {
    std::cout << catalan_number(2) << '\n';   // Expected: 2
    std::cout << catalan_number(3) << '\n';   // Expected: 5
    std::cout << catalan_number(4) << '\n';   // Expected: 14
    std::cout << catalan_number(5) << '\n';   // Expected: 42
    std::cout << catalan_number(12) << '\n';  // Expected: 208012
    
    return 0;
}
