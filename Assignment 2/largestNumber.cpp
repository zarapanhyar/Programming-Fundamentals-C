#include<stdio.h>
int main(){
	int num1, num2, num3;
	
	printf("Enter the first Number");
	scanf("%d",&num1);
	
	printf("Enter the second Number");
	scanf("%d",&num2);
	
	printf("Enter the Third Number");
	scanf("%d",&num3);

	if (num1>num2){
		if (num1>num3){
		printf("%d is largest ",num1);
		}
		else{
		printf("%d is largest",num3);
		}
		
	}
	else{
		if (num2>num3){
		printf("%d is largest",num2);
		
		}
		else{
			printf("%d is largest", num3);
		}
		
				}
	


}
