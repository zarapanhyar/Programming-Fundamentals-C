#include<stdio.h>
int main(){
	float english, maths, prog;
	float average;
	printf("Enter the Marks for English");
	scanf("%f", &english );
	
	printf("Enter the Marks for Maths");
	scanf("%f", &maths );
	
	printf("Enter the Marks for Programming: ");
	scanf("%f", &prog );
	
	average = (english+maths+prog)/3.0;
	
	if (average >=90){
		printf("Grade: A");
	}
	else if (average >=80){
		printf("Grade: B");
	}
	else if (average >=70){
		printf("Grade: C");
	}	
	else if (average >=60){
		printf("Grade: D");
	}
	else{
		printf("Grade: F");
	}
	
}
