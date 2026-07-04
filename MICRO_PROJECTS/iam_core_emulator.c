#include <stdio.h>
#include <string.h>

int main(void) {
    char password[16];
    int length = 0;
    printf("\n====================================================\n");
    printf("\n CYBER SECURITY ENROLLMENT SHIELD");
    printf("\n====================================================\n");
    do {
        printf("\nCREATE A STRONG PASSWORD FOR YOUR ACCOUNT: ");
        if (scanf("%15s", password) != 1) {
            return 1;
        }
        length = (int)strlen(password);
        if (length < 8) {
            printf("\n PASSWORD IS WEAK PLEASE ENTER A STRONG PASSWORD\n");
        }
    } while (length < 8);
    printf("\n [+] congratulations! Your password is strong and secure.\n");

    for (int attempt = 1; attempt <= 3; attempt++) {
        printf("\n HACKER ATTEMPT %d FAILED! PASSWORD SECURITY BLOCKED YOU FROM ACCESSING YOUR ACCOUNT\n", attempt);
    }

    return 0;
}