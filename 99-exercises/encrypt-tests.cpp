// Tests for encrypt.cpp
// Compile: g++ -o encrypt-test encrypt-tests.cpp encrypt.cpp

#include <iostream>
#include <cstring>
#include <cassert>

// Forward declaration - implement in encrypt.cpp
void encrypt(char str[]);

void test_encrypt() {
    std::cout << "=== Testing encrypt ===" << std::endl;
    
    // Test 1: Simple word
    {
        char str[] = "hello";
        encrypt(str);
        std::cout << "Test 1: \"" << str << "\" (expected: \"uryyb\")";
        assert(strcmp(str, "uryyb") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 2: Two words with space
    {
        char str[] = "hello world";
        encrypt(str);
        std::cout << "Test 2: \"" << str << "\" (expected: \"uryyb jbeyq\")";
        assert(strcmp(str, "uryyb jbeyq") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 3: With skip block in the middle
    {
        char str[] = "hello {-- world --}\nbye bye!";
        encrypt(str);
        std::cout << "Test 3: \"" << str << "\" (expected: \"uryyb {-- world --}\\nolr olr!\")";
        assert(strcmp(str, "uryyb {-- world --}\nolr olr!") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 4: Skip block at start, resume encrypting
    {
        char str[] = "{--} abc {--} def";
        encrypt(str);
        std::cout << "Test 4: \"" << str << "\" (expected: \"{--} abc {--} qrs\")";
        assert(strcmp(str, "{--} abc {--} qrs") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 5: No skip blocks (incomplete markers)
    {
        char str[] = "{- abc -} DEF {";
        encrypt(str);
        std::cout << "Test 5: \"" << str << "\" (expected: \"{- nop -} QRS {\")";
        assert(strcmp(str, "{- nop -} QRS {") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 6: Empty string
    {
        char str[] = "";
        encrypt(str);
        std::cout << "Test 6: \"" << str << "\" (expected: \"\")";
        assert(strcmp(str, "") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 7: Only non-letters
    {
        char str[] = "123 !@#";
        encrypt(str);
        std::cout << "Test 7: \"" << str << "\" (expected: \"123 !@#\")";
        assert(strcmp(str, "123 !@#") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 8: Uppercase letters
    {
        char str[] = "ABC";
        encrypt(str);
        std::cout << "Test 8: \"" << str << "\" (expected: \"NOP\")";
        assert(strcmp(str, "NOP") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 9: Skip block that never closes (encrypts nothing after {--)
    {
        char str[] = "abc {-- xyz";
        encrypt(str);
        std::cout << "Test 9: \"" << str << "\" (expected: \"nop {-- xyz\")";
        assert(strcmp(str, "nop {-- xyz") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    std::cout << "\n=== All tests passed! ===" << std::endl;
}

int main() {
    test_encrypt();
    return 0;
}
