#include<stdio.h>
int main(){
	float charges, units;
	
	printf("Enter your units");
	scanf("%f",&units);
	
	if (units<100){
		printf("No extra Charges");
	}
	else if (units>=100 && units<200){
		printf("Charges 5 rupees per unit");
	}
	else if (units>=200 && units<=300){
		printf("Charges 08 rupees per Unit");
		
	}
	else{
		printf("Charges 10 rupees per Unit");
	}

	
	return 0;
}
