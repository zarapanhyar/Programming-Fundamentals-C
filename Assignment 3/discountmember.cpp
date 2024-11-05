#include <stdio.h>

int main() {
    float purchaseAmount, finalAmount;
    char isMember;

   
    printf("Enter the purchase amount: ");
    scanf("%f", &purchaseAmount);

   
    printf("Are you a member (Y/N)? ");
    scanf(" %c", &isMember); 

    if (purchaseAmount > 2000) {
        if (isMember == 'Y' || isMember == 'y') {

            finalAmount = purchaseAmount - (purchaseAmount * 0.20);
        } else {

            finalAmount = purchaseAmount - (purchaseAmount * 0.10);
        }
    } else {

        finalAmount = purchaseAmount;
    }


    printf("Final amount after discount: %.2f\n", finalAmount);

    return 0;
}

