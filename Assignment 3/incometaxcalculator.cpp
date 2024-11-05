#include<stdio.h>
int main(){
	float income;
	
	printf("Enter your Income in Rps");
	scanf("%f", &income);
	
	if (income<=250000){
		printf("No Tax");
	}
	else if (income >250000 && income<=500000){
		printf("5%% Tax");
	}
	else if (income >500000 && income<=1000000){
		printf("10%% Tax");
	}
	else{
		printf("15%% Tax");
	}
}
