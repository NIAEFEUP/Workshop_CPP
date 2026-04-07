// Exercise 2: Keep Letters
// Write a C++ function that removes all characters that are not letters from a C-string.
//
// Function signature:
//   void keep_letters(char s[], char res[])
//
// Requirements:
// - Removes all characters that are not letters from a C-string s
// - Letters are characters 'a' to 'z' and 'A' to 'Z'
// - Places the resulting string in the res array
// - Preserves the order of the original characters
//
// Example: "hello world !" -> "helloworld"

#include <iostream>
#include <cstring>

void keep_letters(char s[], char res[]) {
    // TODO: Implement this function
    // Iterate through s, copy only letters to res
    // Don't forget to null-terminate res
}

// Main function for testing
int main() {
    char s1[] = "hello world !";
    char res1[50];
    keep_letters(s1, res1);
    std::cout << "\"" << s1 << "\" --> \"" << res1 << "\"\n";
    
    char s2[] = "-A+B$C%D&E/a(b)c=d?e";
    char res2[50];
    keep_letters(s2, res2);
    std::cout << "\"" << s2 << "\" --> \"" << res2 << "\"\n";
    
    char s3[] = "C++ Programming 123";
    char res3[50];
    keep_letters(s3, res3);
    std::cout << "\"" << s3 << "\" --> \"" << res3 << "\"\n";
    
    char s4[] = "xyz";
    char res4[50];
    keep_letters(s4, res4);
    std::cout << "\"" << s4 << "\" --> \"" << res4 << "\"\n";
    
    return 0;
}
