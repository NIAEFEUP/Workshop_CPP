// Tests for catalan.cpp
// Compile: g++ -o catalan-test catalan-tests.cpp catalan.cpp

#include <iostream>
#include <cassert>

// Forward declaration - implement in catalan.cpp
int catalan_number(int in);

void test_catalan() {
    std::cout << "=== Testing catalan_number ===" << std::endl;
    
    // Test 1: catalan_number(2) = 2
    {
        int result = catalan_number(2);
        std::cout << "catalan_number(2) = " << result << " (expected: 2)";
        assert(result == 2);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 2: catalan_number(3) = 5
    {
        int result = catalan_number(3);
        std::cout << "catalan_number(3) = " << result << " (expected: 5)";
        assert(result == 5);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 3: catalan_number(4) = 14
    {
        int result = catalan_number(4);
        std::cout << "catalan_number(4) = " << result << " (expected: 14)";
        assert(result == 14);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 4: catalan_number(5) = 42
    {
        int result = catalan_number(5);
        std::cout << "catalan_number(5) = " << result << " (expected: 42)";
        assert(result == 42);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 5: catalan_number(12) = 208012
    {
        int result = catalan_number(12);
        std::cout << "catalan_number(12) = " << result << " (expected: 208012)";
        assert(result == 208012);
        std::cout << " PASSED" << std::endl;
    }
    
    // Additional tests
    // Test 6: catalan_number(1) = 1 (first Catalan number)
    {
        int result = catalan_number(1);
        std::cout << "catalan_number(1) = " << result << " (expected: 1)";
        assert(result == 1);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 7: catalan_number(6) = 132
    {
        int result = catalan_number(6);
        std::cout << "catalan_number(6) = " << result << " (expected: 132)";
        assert(result == 132);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 8: catalan_number(10) = 16796
    {
        int result = catalan_number(10);
        std::cout << "catalan_number(10) = " << result << " (expected: 16796)";
        assert(result == 16796);
        std::cout << " PASSED" << std::endl;
    }
    
    std::cout << "\n=== All tests passed! ===" << std::endl;
}

int main() {
    test_catalan();
    return 0;
}
