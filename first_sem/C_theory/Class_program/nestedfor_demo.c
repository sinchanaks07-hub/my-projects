#include<stdio.h>
int main(){
    int j;
    int i;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        printf(" %d",j);
        printf("\n");
    }
printf("---------------------------\n");
   for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf(" %d",j);
        printf("\n");
    }
    printf("---------------------------\n");
   for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        if((i==5 && j == 3 || i==3 && j==2))
        printf(" %d",j);
        printf("\n");
    }
    
    return 0;
}                   