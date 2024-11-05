#include <stdio.h>
int main() {
    float monthlyIncome;
    char hasExistingLoan, hasOverduePayments;
   
    printf("Enter your monthly income: ");
    scanf("%f", &monthlyIncome);


    if (monthlyIncome > 30000) {

        printf("Do you have an existing loan (Y/N)? ");
        scanf(" %c", &hasExistingLoan);
        
        if (hasExistingLoan == 'Y' || hasExistingLoan == 'y') {
            printf("Do you have any overdue payments (Y/N)? ");
            scanf(" %c", &hasOverduePayments);
            
            if (hasOverduePayments == 'Y' || hasOverduePayments == 'y') {
                printf("You are ineligible for a loan due to overdue payments.\n");
            } else {
                printf("You may qualify for a loan.\n");
            }
        } else {
            
            printf("You may qualify for a loan.\n");
        }
    } else {
        printf("You are ineligible for a loan due to low monthly income.\n");
    }

    return 0;
}

