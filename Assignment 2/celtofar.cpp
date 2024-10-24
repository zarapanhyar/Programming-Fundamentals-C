#include<stdio.h>
int main(){
	float cel, far;
	
	
	printf("Enter The readings in Celcuis: ");
	scanf("%f", &cel);
	far = (cel * (9.0/5.0))+32;
	printf("The equivalent Farhenheit value is %f", far);
	cel = (far-32)*(5.0/9.0);
	printf("\n After conversion back the value of Celcuis is %f", cel);
	
	return 0;
	
}
