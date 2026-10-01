#include <stdio.h>
int rollno;         //global declaration
float first,second,third,four,five,totalmarks;
float average,cgpa;

void getStudentData(){
    printf("Enter the rollno:");
    scanf("%d",&rollno);
    printf("Enter the mark of five subjects:\n");
    scanf("%f\t%f\t%f\t%f\t%f",&first,&second,&third,&four,&five);
}
void getTotal(){
    totalmarks = first+second+third+four+five;
   }  
void getaverage(){
    average =totalmarks/5;
}
void getcgpa(){
    cgpa=average/9.5;
}
void DisplayStudentDetails(){
    printf("The rollno of student:%d\n",rollno);
    printf("Totalmarks:%.2f\n",totalmarks);
    printf("Average:%.2f\n",average);
    printf("CGPA:%.2f\n",cgpa);
}
int main(){
    getStudentData();
    getTotal();
    getcgpa();
    DisplayStudentDetails();

    return 0;
}



