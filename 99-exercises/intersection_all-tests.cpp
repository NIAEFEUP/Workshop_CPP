// Tests for intersection_all.cpp
// Compile: g++ -o intersection-test intersection_all-tests.cpp intersection_all.cpp

#include <iostream>
#include <cassert>
#include "rectangle.h"

// Forward declaration - implement in intersection_all.cpp
rectangle intersection_all(const rectangle r[], int size);

void test_intersection_all() {
    std::cout << "=== Testing intersection_all ===" << std::endl;
    
    // Test 1: Two rectangles
    {
        const int n = 2;
        rectangle rects[n] = {
            {{2, 2}, {8, 8}},
            {{7, 7}, {100, 25}}
        };
        rectangle result = intersection_all(rects, n);
        std::cout << "Test 1: [" << result.bot_left.x << "," << result.bot_left.y 
                  << "] to [" << result.top_right.x << "," << result.top_right.y << "]"
                  << " (expected: [7,7] to [8,8])";
        assert(result.bot_left.x == 7);
        assert(result.bot_left.y == 7);
        assert(result.top_right.x == 8);
        assert(result.top_right.y == 8);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 2: Three rectangles
    {
        const int n = 3;
        rectangle rects[n] = {
            {{2, 2}, {8, 8}},
            {{4, 4}, {10, 6}},
            {{5, 3}, {7, 5}}
        };
        rectangle result = intersection_all(rects, n);
        std::cout << "Test 2: [" << result.bot_left.x << "," << result.bot_left.y 
                  << "] to [" << result.top_right.x << "," << result.top_right.y << "]"
                  << " (expected: [5,4] to [7,5])";
        assert(result.bot_left.x == 5);
        assert(result.bot_left.y == 4);
        assert(result.top_right.x == 7);
        assert(result.top_right.y == 5);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 3: Four rectangles
    {
        const int n = 4;
        rectangle rects[n] = {
            {{1, 2}, {8, 8}},
            {{2, 1}, {7, 10}},
            {{4, 5}, {7, 8}},
            {{5, 6}, {9, 7}}
        };
        rectangle result = intersection_all(rects, n);
        std::cout << "Test 3: [" << result.bot_left.x << "," << result.bot_left.y 
                  << "] to [" << result.top_right.x << "," << result.top_right.y << "]"
                  << " (expected: [5,6] to [7,7])";
        assert(result.bot_left.x == 5);
        assert(result.bot_left.y == 6);
        assert(result.top_right.x == 7);
        assert(result.top_right.y == 7);
        std::cout << " PASSED" << std::endl;
    }
    
    // Test 4: Single rectangle (should return itself)
    {
        const int n = 1;
        rectangle rects[n] = {
            {{3, 4}, {10, 12}}
        };
        rectangle result = intersection_all(rects, n);
        std::cout << "Test 4: [" << result.bot_left.x << "," << result.bot_left.y 
                  << "] to [" << result.top_right.x << "," << result.top_right.y << "]"
                  << " (expected: [3,4] to [10,12])";
        assert(result.bot_left.x == 3);
        assert(result.bot_left.y == 4);
        assert(result.top_right.x == 10);
        assert(result.top_right.y == 12);
        std::cout << " PASSED" << std::endl;
    }
    
    std::cout << "\n=== All tests passed! ===" << std::endl;
}

int main() {
    test_intersection_all();
    return 0;
}
