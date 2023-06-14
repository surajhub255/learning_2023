/*1(a). Write a function to find biggest of 2 numbers using 
    - if else*/
    
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    printf("Biggest:%d",a);
    else
    printf("Biggest:%d",b);
}


/*2(b). Write a function to find biggest of 2 numbers using 
    - ternary operator*/
    
    
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    (a>b) ? printf("Biggest:%d",a) : printf("Biggest:%d",b);
    return 0;
}
