#include <stdio.h>

int main() {
    int dayNumber;

   
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &dayNumber);

   
    if (dayNumber >= 1 && dayNumber <= 7) {
   
        switch(dayNumber) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            default:
   
                printf("Invalid input\n");
        }
    } else {
   
        printf("Invalid input\n");
    }

    return 0;
}

