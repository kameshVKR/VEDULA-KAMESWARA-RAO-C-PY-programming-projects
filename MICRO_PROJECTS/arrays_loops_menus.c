#include <stdio.h>

int main() {
    // sample of comments
    char VKR[] = "Kamesh";
    printf("my name is %s\n", VKR);

    // SWITCH CASE (WEEKDAY MENU)
    int day=2;
    switch(day)
    {
      case 1: printf("monday\n");
      break;
      case 2:printf("tuesday\n");
      break;
      case 3: printf("invalid input\n");
      break;
    }

    // VOWEL CHECKER
    char ch;
    printf("enter ch: ");
    scanf(" %c", &ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
      printf("it's a vowel\n");
    }
    else {
      printf("consonant\n");
    }

    // WHILE LOOP
    int index = 0;
    int i;
    while (index < 10) {
        printf("the value of index is %d\n", index);
        index++;
    }

    // FOR LOOP 
    for (i = 0; i < 10; i++) {
        printf("the value of i is %d\n", i);
    }

    // DO WHILE LOOP
    do {
        printf("the value of index in do while loop is  %d\n", index);
        index++;
    } while (index < 20);

    // FOR LOOP COUNTING 1 TO 100
    for (i = 1; i <= 100; i++)
    {
      printf("%d\n", i);
    }

    // ARRAY PRINTING (Traditional %d format)
    int grade[]={1,2,3,4,5};
    printf("%d\n", grade[2]);

    return 0;
}
