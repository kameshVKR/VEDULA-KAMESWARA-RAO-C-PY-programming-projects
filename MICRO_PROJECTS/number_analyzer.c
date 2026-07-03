#include <stdio.h>

int main() {
    //EVEN OR ODD 
    int x;
    printf("ENTER VALUE OF x\n");
    scanf("%d", &x);
    if (x%2==0){
        printf("X IS EVEN\n");
    }
    else {
        printf("X IS ODD\n");
    }

    // POSITIVE OR NEGATIVE 
    int y;
    printf("ENTER VALUE OF Y: ");
    scanf("%d", &y);
    if (y > 0) {
        printf("value of y is positive\n");
    }
    else {
        printf("value of y is negative\n");
    }

    return 0;
}
