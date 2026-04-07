// Exercise 5: String Encryption
// Write a C++ function that encrypts a string using a modified ROT13 cipher.
//
// The encrypt function for a single character is provided:
void encrypt(char& c) {
    c = (c >= 'a' && c <= 'z') ?
        (c + 13 - 'a') % 26 + 'a' :
        (c + 13 - 'A') % 26 + 'A';
}
// This function transforms a letter into a different letter (ROT13)
// and is undefined for non-letters.
//
// Function signature:
//   void encrypt(char str[])
//
// Requirements:
// - Uses the provided encrypt function to encrypt letters
// - Non-letters (different from 'a'-'z' and 'A'-'Z') are NOT encrypted
// - After "{--" the text stops being encrypted until it finds a following "--}"
//   or the end of the string
// - Example: "hello {-- world --}!" encrypts only "hello", producing "uryyb {-- world --}!"
//
// Examples:
// - "hello" -> "uryyb"
// - "hello world" -> "uryyb jbeyq"
// - "hello {-- world --}\nbye bye!" -> "uryyb {-- world --}\nolr olr!"
// - "{--} abc {--} def" -> "{--} abc {--} qrs"
// - "{- abc -} DEF {" -> "{- nop -} QRS {"

#include <iostream>
#include <cstring>

// Single character encryption (provided)
// void encrypt(char& c) - defined above

// TODO: Implement string encryption function
void encrypt(char str[]) {
    // TODO: Implement this function
    // - Encrypt letters normally
    // - Skip non-letters
    // - After "{--" stop encrypting until you find "--}" or end of string
}

int main() {
    // Test 1
    {
        char str[] = "hello";
        encrypt(str);
        std::cout << "\"" << str << "\"\n";
        // Expected: "uryyb"
    }
    
    // Test 2
    {
        char str[] = "hello world";
        encrypt(str);
        std::cout << "\"" << str << "\"\n";
        // Expected: "uryyb jbeyq"
    }
    
    // Test 3
    {
        char str[] = "hello {-- world --}\nbye bye!";
        encrypt(str);
        std::cout << "\"" << str << "\"\n";
        // Expected: "uryyb {-- world --}\nolr olr!"
    }
    
    // Test 4
    {
        char str[] = "{--} abc {--} def";
        encrypt(str);
        std::cout << "\"" << str << "\"\n";
        // Expected: "{--} abc {--} qrs"
    }
    
    // Test 5
    {
        char str[] = "{- abc -} DEF {";
        encrypt(str);
        std::cout << "\"" << str << "\"\n";
        // Expected: "{- nop -} QRS {"
    }
    
    return 0;
}
