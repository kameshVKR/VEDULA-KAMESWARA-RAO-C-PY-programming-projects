#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
    char name[20];
    int rollno;
    int marks;
    char admission_number[7];
};

int main () {
    //AGE VERIFICATION 
    int age;
    printf("ENTER YOUR AGE: \n");
    scanf("%d", &age);
    if (age >= 18) {
        printf("YOU ARE ELIGIBLE TO GET A DRIVING LICENSE \n");
    }
    else {
        printf("YOU ARE NOT ELIGIBLE TO GET A DRIVING LICENSE \n");
    }
    struct student s1;
    printf("ENTER THE STUDENT DETAILS BELOW\n");

    printf("ENTER THE STUDENT NAME HERE: \n");
    scanf("%s", &s1.name);
    printf("ENTER THE STUDENT ADMISSION NUMBER HERE: \n");
    scanf("%s", &s1.admission_number);
    if (strlen(s1.admission_number) != 7) {
        printf("INVALID ADMISSION NUMBER \n");
    }
    else {
        printf("VALID ADMISSION NUMBER \n");
    }
    printf("ENTER THE STUDENT ROLL NUMBER HERE: \n");
    scanf("%d", &s1.rollno);
    printf("ENTER THE STUDENT MARKS HERE: \n");
    scanf("%d", &s1.marks);
    printf("THE STUDENT NAME IS %s \n", s1.name);
    printf("THE STUDENT ADMISSION NUMBER IS %s \n", s1.admission_number);
    printf("THE STUDENT ROLL NUMBER IS %d \n", s1.rollno);
    printf("THE STUDENT SCORES %d MARKS \n", s1.marks);
    

    return 0;
}