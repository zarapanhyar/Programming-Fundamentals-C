#include<stdio.h>
#include<string.h>
int main(){
	int balance=1000000, tamount;
	char permission[1];
	printf("Enter the amount for transaction");
	scanf("%d", &tamount);
	if (tamount>10000){
		
		printf("Do you have a special Permit [Y for yes and N for NO]");
		scanf("%s", &permission);
		if (!strcmp(permission,"y")){
			balance =  balance-tamount;
		printf("Transaction Successful\n");
		printf("The ramaining amount is %d \n", balance);
		}
		else{
			printf("NO Transaction Allowed");
			
		}
			
	}
	else{
		printf("Direct Transaction Successful");
	}
	
	
	
	
	return 0;
}
