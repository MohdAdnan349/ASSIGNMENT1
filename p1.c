#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;
    // Write C code here
    printf("\nenter the length");
    scanf("%d", &length);
    printf("\nenter the breadth");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("\narea of rectangle %d", area);
    printf("\nperimeter of rectangle %d", perimeter);
    return (0);
}