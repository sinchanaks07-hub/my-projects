#include<stdio.h>
int main(){
    //int mymark;     // declaration
    // mymark=50;      //initialization
    int details,studentmark;
    int mark;
    do
    {
    
    
    printf("Enter student details:");
    scanf("%d",details);
    printf("Enter the mark of DBMS:");
    scanf("%d",mark);
    printf("Enter the mark of Python:");
    scanf("%d",mark);
    printf("Enter the mark of Maths:");
    scanf("%d",mark);
    if(studentmark>=90){
        printf("Grade : Distinction");
    }
    else if(studentmark>= 75){
        printf("Grade : First Class");
    }
    else if(studentmark >= 60){
        printf("Grade : Second Class");
    }
    else{
        printf("Grade : pass ");
    }
return 0;
}
}