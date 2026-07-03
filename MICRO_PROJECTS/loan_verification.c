#include <stdio.h>

int main() {
    // loan verification
    int salary;
    printf("enter your salary: ");
    scanf("%d", &salary);
    if (salary >= 30000) {
        printf("you're approved for loan\n");
    }
    else {
        printf("you're not eligible for loan\n");
    }

    return 0;
}
