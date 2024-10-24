#include<stdio.h>
#include<conio.h>
int main(){
    float cel, far;
    printf("Enter the value of Fahrenheit: ");
    scanf("%f",&far);
    //far = ((9/5)*celcuis)+32;
    cel = ((5/9)*far)-32;
    printf("The equivalent value of Fahrenheit %f in celsius is %f.");


    return 0;
}