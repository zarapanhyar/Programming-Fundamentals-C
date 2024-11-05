#include <stdio.h>
#include<conio.h>

int main() {
    float num1, num2;
	int operation;
    float result;
    
    printf("Enter the first Number: ");
    scanf("%f",&num1);
    printf("Enter the second Number: ");
    scanf("%f",&num2);
    printf("Enter the Operation \n1. + \n2. - \n3. * \n4. /");
    scanf("%d", &operation);
    if (operation ==1){
	result = num1+num2;
	printf("The sum of two numbers is %f", result);
	}
	else if (operation ==2){
	result = num1-num2;
	printf("The difference of two numbers is %f", result);
	
	}
	else if (operation ==3){
	result = num1*num2;
	printf("The Multiplication of two numbers is %f", result);
	
	}	
	else if (operation ==4){
	result = num1/num2;
	printf("The quotient of two numbers is %f", result);
	
	}
	else{
		printf("Invalid Operation");
	}    
    

    return 0;
}
