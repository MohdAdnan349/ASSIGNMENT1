#include<stdio.h>  
  
void main()  
{  
    int a;
    int b;
    int c;
  
    printf("Enter the age of a, b and c\n");  
    scanf("%d%d%d", &a,&b,&c);
  
    if(a <= b && a <= c)  
    {  
        printf("a is the youngest\n");  
    }  
  
    if(b <= a && b <= c)  
    {  
        printf("b is the youngest\n");  
    }  
  
    if(c <= a && c <= b)  
    {  
        printf("c is the youngest\n");  
    }  
  
getch();
}