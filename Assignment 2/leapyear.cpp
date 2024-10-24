#include<stdio.h>
int main(){
	int year;
	printf("Enter the year to check: ");
	scanf("%d",&year);
	
	if ((year%4==0) && (year%100!=0)){
			printf("The year is Leap Year");
	}
	else{
		printf("This year is not leap year");
		
		}
		
		
	return 0;
}
