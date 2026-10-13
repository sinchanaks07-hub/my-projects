#include <stdio.h>
#define N 6

int total(int marks[])
{
    int i;
    int sum = 0;
    for(i=0;i<N;i++)
    {
        sum = sum+marks[i];
    }
    return sum;
}
//function to check result
int checkResult(int marks[])
{
    int i;
    for(i=0;i<N;i++){
        if (marks[i] < 35)
        {
            return 0;
        }
    }
    return 1;
}


int main(){
    int roll[N];
    char name[N][20];
    int marks[N][N];

    int i,j,t;
    float average,percentage;

    //Input
    for(i=0;i<N;i++)
    {
        printf("Enter Roll No:");
        scanf("%d",roll[i]);

    }
}