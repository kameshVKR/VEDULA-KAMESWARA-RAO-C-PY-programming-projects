#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char username[50];
    char password[50];
    printf("WELCOME TO THE XYZ BANK\n");
    printf("enter your user name here: ");
    scanf("%s", username );
    
    if (strlen(username)<6){
        printf("INVALID USERNAME: the user name must contain at least 6 characters\n");
    }
    else { 
        printf("loading the page...\n");
        printf("create your password it must at least contain 8 characters: ");
        scanf("%s", password );
        
        if (strlen(password)<8) {
            printf("INVALID PASSWORD: the password must contain at least 8 characters\n");
        }
        else {
            printf("loading the user details...\n");
            int bank_balance = 100000;
            int deposit1;
            int withdraw1;
            char choise[20]; // FIXED: Added missing semicolon

            printf("ENTER (deposit / withdraw): ");
            scanf("%s", choise); // FIXED: Added missing '%' symbol

            // FIXED: Added == 0 to properly execute when strings match perfectly
            if (strcmp(choise, "deposit") == 0) { 
                printf("enter your amount here: ");
                scanf("%d", &deposit1);
                printf("new balance %d\n", bank_balance + deposit1);
            }
            // FIXED: Changed to else if, passed 'choise', and added == 0
            else if (strcmp(choise, "withdraw") == 0) { 
                printf("enter your amount here: ");
                scanf("%d", &withdraw1);
                printf("new balance %d\n", bank_balance - withdraw1); // Perfectly interchanged!
            }
            else {
                printf("Invalid choice!\n");
            }
        }
    }
    return 0;
}
