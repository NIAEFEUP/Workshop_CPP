// Exercise 4: Rectangle Intersection
// Write a C++ function that computes the intersection of all rectangles.
//
// The structs point2d and rectangle are defined in rectangle.h
// A rectangle is defined by its bottom-left and top-right points in a 2D coordinate system.
//
// Function signature:
//   rectangle intersection_all(const rectangle r[], int size)
//
// Requirements:
// - Receives a non-empty array of rectangles r of size 'size'
// - Computes the intersection of all rectangles
// - The intersection is defined by the area shared by all rectangles
// - For simplicity, assume that the intersection of all rectangles is non-empty.
//
// Example: Three rectangles with intersection from (5,4) to (7,5)

#include <iostream>
#include "rectangle.h"

rectangle intersection_all(const rectangle r[], int size) {
    // TODO: Implement this function
    // Hint: The intersection of two rectangles has:
    //   - bot_left.x = max of all bot_left.x values
    //   - bot_left.y = max of all bot_left.y values
    //   - top_right.x = min of all top_right.x values
    //   - top_right.y = min of all top_right.y values
    
    rectangle result = {{0, 0}, {0, 0}};
    return result;
}

// Helper function to print a rectangle
std::ostream& operator<<(std::ostream& os, const rectangle& r) {
    os << "[" << r.bot_left.x << "," << r.bot_left.y << "] to ["
       << r.top_right.x << "," << r.top_right.y << "]";
    return os;
}

int main() {
    // Test 1: n = 2
    {
        const int n = 2;
        rectangle rects[n] = {
            {{2, 2}, {8, 8}},
            {{7, 7}, {100, 25}}
        };
        std::cout << intersection_all(rects, n) << '\n';
        // Expected: [7,7] to [8,8]
    }
    
    // Test 2: n = 3
    {
        const int n = 3;
        rectangle rects[n] = {
            {{2, 2}, {8, 8}},
            {{4, 4}, {10, 6}},
            {{5, 3}, {7, 5}}
        };
        std::cout << intersection_all(rects, n) << '\n';
        // Expected: [5,4] to [7,5]
    }
    
    // Test 3: n = 4
    {
        const int n = 4;
        rectangle rects[n] = {
            {{1, 2}, {8, 8}},
            {{2, 1}, {7, 10}},
            {{4, 5}, {7, 8}},
            {{5, 6}, {9, 7}}
        };
        std::cout << intersection_all(rects, n) << '\n';
        // Expected: [5,6] to [7,7]
    }
    
    return 0;
}
