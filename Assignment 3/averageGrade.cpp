#include <stdio.h>

int main() {
    float subject1, subject2, subject3, average;
    
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    average = (subject1 + subject2 + subject3) / 3;
    
    if (average < 50) {
        printf("Result: Fail\n");
    } else {
        if (average > 75) {
            printf("Grade: A\n");
        } else {
            printf("Grade: B\n");
        }
    }

    return 0;
}
