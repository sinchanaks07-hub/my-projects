#include<stdio.h>
int main(){
    int number,i;
    int sum;
    printf("--------C program to get the sum of numbers from 5 to N--------\n");
    printf("Enter the N value:");
    scanf("%d",&number);
    for (i=5; i<=number; i++) { 
        sum=sum+i;
 }
 if(number>=5){
    printf("sum=%d",sum);
}
else{
    printf("Please Enter N greater than 5");    
}
return 0;
}