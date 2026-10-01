#include <stdio.h>
void addition(int first,int second){        //function definition
    int sum;
    //int first = 100;
    //int second = 200;
    sum = first + second;
    printf("The sum is %d\n",sum);
}

int main(){
addition(10,20);
addition(100,200);
addition(300,500);
printf("pgm terminated");
}



