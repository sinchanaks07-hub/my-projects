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
int getTotal(){
    totalmarks = first+second+third+four+five;
    return totalmarks;
   }  
int getaverage(){
    average =totalmarks/5;
    return average;
}
int getcgpa(){
    cgpa=average/9.5;
    return cgpa;
}
int main(){
    getStudentData();
    float total=getTotal();
    float Avg=getaverage();
    float CGPA=getcgpa();
printf("===Returndata===\n");
printf("The sum:%.2f\n",total);
printf("The average:%.2f\n",Avg);
printf("The CGPA:%.2f\n",CGPA);

    return 0;
}
