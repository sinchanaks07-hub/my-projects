#include <stdio.h>
int main (){
    int n,i;    int regular=0;
    int category;   int premium=0;
    int total = 0;  int recliner=0;
    int TotalAmount=0;  int discount=0;
    printf("=======Movie Ticket Counter=======\n");
    printf("Enter number of tickets:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {printf("Enter the category for %d ticket [1/2/3]:",i);
        scanf("%d",&category);
            if (category == 1){
                total = total +150;
                regular++;
            }else if(category==2) 
            {
                total = total + 250;
                premium++;
            }else if(category==3){
                total = total + 400;
                recliner++;
            }
    }
    if(n>=5){
        discount=total*0.10;
    }TotalAmount = total-discount;
printf("------Final Bill------\n");
printf("Regular Ticket:%d\n",regular);
printf("Premium Ticket:%d\n",premium);
printf("Recliner Ticket:%d\n",recliner);
printf("Total(before Discount):%d\n",total);
if(n>=5){
printf("Discount applied:Yes\n");
}else {
    printf("Discount applied:No\n");
}
printf("Final Amount:%d\n",TotalAmount);
}