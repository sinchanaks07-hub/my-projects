// declare a charater array to store your name
#include <stdio.h>
int main(){
    char name[9]="sinchana";
    printf("Name:%s",name);

    char stud[9];
    printf("\nEnter the name:");
    scanf("%8s",&stud);
    printf("hello..%s!",stud);          // it does not read a space

    char student[15];
    printf("\nEnter the Name: \n");
    scanf("%14s",student);
    fgets(student,sizeof(student),stdin);

    char word[] = "Program";
    for (int i = 0; word[i] != '\0'; i++) {
        printf("word[%d] = %c-", i, word[i]);
    }

    
}

