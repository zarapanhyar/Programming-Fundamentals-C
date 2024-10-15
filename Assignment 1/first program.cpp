// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a,b;
    int  sum;
    printf("Enter first Number: ");
    scanf("%d",&a);
    printf("\nEnter Second Number");
    scanf("%d",&b);
    sum = a+b;
    
    printf("The sum of %d and %d is %d.",a,b,sum);

    return 0;
}