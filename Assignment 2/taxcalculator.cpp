#include<stdio.h>
int main(){
	float tshoping, tamount, discount;
	
	
	printf("Enter the Total shopping amount");
	scanf("%f",&tshoping);
	
	if (tshoping >5000){
		discount = 0.2;
	}
	else if (tshoping >3000){
		discount = 0.1;
	}
	else{
		discount =0;
	}
	
	tamount = tshoping - tshoping*discount;
	printf("The amount to be paid after discount is %.2f",tamount);
	
	return 0;
	
}
