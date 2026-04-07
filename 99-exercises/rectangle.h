// Header file for Exercise 4: Rectangle Intersection
// This defines the point2d and rectangle structs

#ifndef RECTANGLE_H
#define RECTANGLE_H

struct point2d {
    int x;
    int y;
};

struct rectangle {
    point2d bot_left;   // Bottom-left corner
    point2d top_right;  // Top-right corner
};

#endif // RECTANGLE_H
