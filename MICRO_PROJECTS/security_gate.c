#include <stdio.h>

int main() {
    // AGE VERIFICATION
    int age;
    printf("ENTER YOUR AGE FOR ACCESS: ");
    if (scanf("%d", &age) == 1) {
        if (age >= 18) {
            printf("access granted\n");
        } else {
            printf("access denied\n");
        }
    } else {
        printf("invalid input\n");
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);
    }

    // RETIREMENT ELIGIBILITY CONDITION
    int age2;
    printf("ENTER YOUR AGE FOR RETIREMENT: ");
    if (scanf("%d", &age2) == 1) {
        if (age2 >= 60) {
            printf("you are eligible for retirement\n");
        } else {
            printf("you are not eligible for retirement\n");
        }
    } else {
        printf("invalid input\n");
    }

    // SHORT HAND FOR IF AND ELSE CONDITION (Ternary Operator)
    int AGE;
    printf("ENTER YOUR AGE FOR ACCESS: ");
    scanf("%d", &AGE);
    AGE>=18 ? printf("access granted\n") : printf("access denied\n");

    return 0;
}
