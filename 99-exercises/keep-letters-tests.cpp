// Tests for keep-letters.cpp
// Compile both files: g++ -o keep-letters-test keep-letters-tests.cpp
// Or include the function implementation

#include <iostream>
#include <cstring>
#include <cassert>

// Forward declaration - implement in keep-letters.cpp
void keep_letters(char s[], char res[]);

void test_keep_letters() {
    std::cout << "=== Testing keep_letters ===" << std::endl;
    
    // Test 1: "hello world !" -> "helloworld"
    {
        char s[] = "hello world !";
        char res[50];
        keep_letters(s, res);
        std::cout << "Test 1: \"" << s << "\" --> \"" << res << "\"";
        assert(strcmp(res, "helloworld") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 2: "-A+B$C%D&E/a(b)c=d?e" -> "ABCDEabcde"
    {
        char s[] = "-A+B$C%D&E/a(b)c=d?e";
        char res[50];
        keep_letters(s, res);
        std::cout << "Test 2: \"" << s << "\" --> \"" << res << "\"";
        assert(strcmp(res, "ABCDEabcde") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 3: "C++ Programming 123" -> "CProgramming"
    {
        char s[] = "C++ Programming 123";
        char res[50];
        keep_letters(s, res);
        std::cout << "Test 3: \"" << s << "\" --> \"" << res << "\"";
        assert(strcmp(res, "CProgramming") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 4: "xyz" -> "xyz"
    {
        char s[] = "xyz";
        char res[50];
        keep_letters(s, res);
        std::cout << "Test 4: \"" << s << "\" --> \"" << res << "\"";
        assert(strcmp(res, "xyz") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 5: Empty string
    {
        char s[] = "";
        char res[50];
        keep_letters(s, res);
        std::cout << "Test 5: \"\" --> \"" << res << "\"";
        assert(strcmp(res, "") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 6: No letters
    {
        char s[] = "123!@#";
        char res[50];
        keep_letters(s, res);
        std::cout << "Test 6: \"" << s << "\" --> \"" << res << "\"";
        assert(strcmp(res, "") == 0);
        std::cout << " PASSED" << std::endl;
    }
    
    std::cout << "\n=== All tests passed! ===" << std::endl;
}

int main() {
    test_keep_letters();
    return 0;
}
