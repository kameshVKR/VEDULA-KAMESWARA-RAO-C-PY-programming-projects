#include <stdio.h>

int main() {
    // exam results
    int marks;

    printf("DEAR CANDIDATE PLEASE ENTER YOUR MARKS: ");
    scanf("%d", &marks);
    if (marks > 100 || marks < 0) {
        printf("invalid marks error\n");
    }
    else if (marks >= 35) {
        printf("you passed\n");
    }
    else {
        printf("failed\n");
    }

    // else if combination
    int marks1;
    printf("enter your marks: ");
    scanf("%d", &marks1);
    if (marks1 >= 70){
        printf("very good\n");
    }
    else if (marks1 >= 60) {
        printf("good\n");
    }
    else if (marks1 >= 35){ 
        printf("pass\n");
    }
    else {
        printf("fail\n");
    }

    return 0;
}
