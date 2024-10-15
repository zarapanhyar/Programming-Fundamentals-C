// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    float celcuis, far;
    
    printf("Enter the Temperature value in Celcuis");
    scanf("%f", &celcuis);
    far = ((9/5)*celcuis)+32;
    printf("%f celcuis is equal to %f Fahrenheit",celcuis, far);

    return 0;
}