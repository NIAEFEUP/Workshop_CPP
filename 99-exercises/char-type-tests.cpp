// Tests for char-type.cpp
// Compile: g++ -o char-type char-type.cpp
// Run tests manually or use this test harness

#include <iostream>
#include <sstream>
#include <string>
#include <cassert>

// Test cases based on the exercise requirements:
// | Input | Expected  |
// |-------|-----------|
// | A     | VOWEL     |
// | b     | CONSONANT |
// | 1     | INVALID   |
// | Z     | CONSONANT |
// | @     | INVALID   |

void printTestCase(const std::string& input, const std::string& expected) {
    std::cout << "Input: '" << input << "' -> Expected: " << expected << std::endl;
}

int main() {
    std::cout << "=== Test Cases for char-type ===" << std::endl;
    
    // Vowels (uppercase)
    printTestCase("A", "VOWEL");
    printTestCase("E", "VOWEL");
    printTestCase("I", "VOWEL");
    printTestCase("O", "VOWEL");
    printTestCase("U", "VOWEL");
    
    // Vowels (lowercase)
    printTestCase("a", "VOWEL");
    printTestCase("e", "VOWEL");
    printTestCase("i", "VOWEL");
    printTestCase("o", "VOWEL");
    printTestCase("u", "VOWEL");
    
    // Consonants (uppercase)
    printTestCase("B", "CONSONANT");
    printTestCase("Z", "CONSONANT");
    printTestCase("C", "CONSONANT");
    
    // Consonants (lowercase)
    printTestCase("b", "CONSONANT");
    printTestCase("z", "CONSONANT");
    printTestCase("c", "CONSONANT");
    
    // Invalid characters
    printTestCase("1", "INVALID");
    printTestCase("@", "INVALID");
    printTestCase(" ", "INVALID");
    printTestCase("!", "INVALID");
    
    std::cout << "\n=== Run these tests with your implementation ===" << std::endl;
    std::cout << "echo 'A' | ./char-type   # Should output: VOWEL" << std::endl;
    std::cout << "echo 'b' | ./char-type   # Should output: CONSONANT" << std::endl;
    std::cout << "echo '1' | ./char-type   # Should output: INVALID" << std::endl;
    
    return 0;
}
