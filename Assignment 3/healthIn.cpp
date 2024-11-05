#include <stdio.h>

int main() {
    int age;
    char hadSeriousIllness;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age > 18) {
        if (age > 45) {
    
            printf("Have you had any serious illness (Y/N)? ");
            scanf(" %c", &hadSeriousIllness);  

            if (hadSeriousIllness == 'Y' || hadSeriousIllness == 'y') {
                printf("You are not eligible for health insurance due to your health history.\n");
            } else {
                printf("You are eligible for health insurance.\n");
            }
        } else {
    
            printf("You are eligible for health insurance.\n");
        }
    } else {
    
        printf("You are not eligible for health insurance due to your age.\n");
    }

    return 0;
}

