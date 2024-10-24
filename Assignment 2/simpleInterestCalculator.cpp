#include<stdio.h>
int main(){
	
	float  p, i;
	int time;
	float iamount, totalamount;
	
	printf("Enter the Principle Amount");
	scanf("%f",&p);
	
	printf("Enter the interest rate");
	scanf("%f",&i);
	
	printf("Enter the year");
	scanf("%d",&time);
	
	iamount = p*(i/100)*time;
	totalamount = p + iamount;
	
	printf("The calculated interest amount is %.2f and\nTotal amount tobe paid is %.27f",iamount,totalamount);
	
	return 0;
}
