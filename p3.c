#include <stdio.h>

int main() {
    int a, b, swap;
    printf("\nenter the value of a");
    scanf("%d", &a);
    printf("\nenter the value of b");
    scanf("%d", &b);
    swap=a;
    a=b;
    b=swap;
    printf("\nthe new value of a%d",a);
    printf("\nthe new value of b%d",b);
    
    return 0;
    }