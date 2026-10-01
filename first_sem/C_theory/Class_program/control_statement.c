// to demo scanf()
#include<stdio.h>
int main(){
    int choice=1,num1,num2;
do{
    printf("---------------Welcome to my calculator---------------\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    
    if(choice==1){
        //addition
        printf("Enter first number:");
        scanf("%d",&num1);
        printf("Enter second number:");
        scanf("%d",&num2);
        int sum = num1 + num2;
        printf("The sum is %d\n",sum);
    }
    if(choice == 2){
        //substraction
        printf("Enter first number:");
        scanf("%d",&num1);
        printf("Enter second number:");
        scanf("%d",&num2);
        int difference = num1 - num2;
        printf("The difference is %d\n",difference);
    }
            
    if(choice ==3){
        //multiplication
        printf("Enter first number:");
        scanf("%d",&num1);
        printf("Enter second number:");
        scanf("%d",&num2);
        int product = num1 * num2;
        printf("The product is %d\n",product);
    }
    if(choice == 4){
        //division
        printf("Enter first number:");
        scanf("%d",&num1);
        printf("Enter second number:");
        scanf("%d",&num2);
        int quotient = num1 / num2;
        printf("The quotient is %d\n",quotient);
    }while (choice<=4);
    printf("----------------------------END-------------------------\n");
    return 0;
 }
}