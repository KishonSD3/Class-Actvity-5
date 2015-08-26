
#include <stdio.h>
int main (void)

{
    int integer1;
    int integer2;
    int a;
    
    printf("Enter a number");
    scanf("%d", &integer1);
    
    printf("Enter the second number");
    scanf("%d", &integer2);
    
    printf("Enter 1 to add or 2 to multiply");
    scanf("%d", &a);
    
    if (a==1)
    {
        
        sum = integer1 + integer2;
        printf("sum is %d \n,", sum);
    
        
    }
    
    else if (a==2)
    {
        
        product = integer1 * integer2;
        printf("product is %d \n", product);
        
        
    }

    
    
    return 0;
    
}
