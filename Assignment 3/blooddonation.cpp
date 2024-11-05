#include<stdio.h>
int main(){
	int age, weight;
	
	printf("Enter the Age of the donor");
	scanf("%d",&age);
	
		printf("Enter the Weight of the donor ");
	scanf("%d",&weight);
	
	
	if (age >=18 && age<=65){
		if (weight >=50){
			printf("You can donate blood");
		}
		else{
			printf("You can not donate blood due to underweight");
		}
	}
	else{
		printf("You can not donate blood due to under or ovar age");
	}
	
	
	return 0;
}
