#include<stdio.h>
#include<string.h>
int main(){
	char Auser[] = "admin";
	int Apass = 1234;
	char name[5];
	int Upass;
	
	printf("Enter the Username: ");
	scanf("%s", &name);
	printf(name);
	printf("Enter Password");
	scanf("%d",&Upass);
	if (!strcmp(Auser,name) && (Apass == Upass)){
		
		printf("User and password is correct");
	}
	else{
		
		printf("Invalid Credentials");
	}
	
	

	return 0;
}
