#include <stdio.h>

int main() {
    int a, b;
    printf("\nenter the value of a");
    scanf("%d", &a);
    printf("\nenter the value of b");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nthe new value of a%d",a);
    printf("\nthe new value of b%d",b);
    
    return 0;
}