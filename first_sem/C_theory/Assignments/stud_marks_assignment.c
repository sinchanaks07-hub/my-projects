#include <stdio.h>
int roll[5],marks[5][5];
char name[5][30];

void input(void)  //collects the details of each student
{
    int i,j;

    for(i=0;i<5;i++)
    {
        printf("\n----Enter the details of student %d ---- \n",i+1);
        printf("Enter the roll no :");
        scanf("%d",&roll[i]);

        printf("Enter the Name:");
        scanf("%29s",&name[i]);

        for(j=0;j<5;j++)
        {
            do{
                printf("Enter the subject %d mark(0-100): ",j+1);
                scanf("%d",&marks[i][j]);

                if(marks[i][j]<0 || marks[i][j]>100)
                printf("Invalid marks! Retry.\n");
            }while(marks[i][j]<0 || marks[i][j]>100);
        }
    }
}

void result(void)
{
    int i,j,total,pass;
    float avg,percent;
    printf("\nStudent Results:\n");
    printf("===============================================================\n");
    printf("|Roll.No\tName\tTotal\tAverage\tPercentage\tResult|\n");
    printf("===============================================================\n");

    for(i=0;i<5;i++)
    {
        total=0;
        pass=1;

        for(j=0;j<5;j++)
        {
            total +=marks[i][j];

            if(marks[i][j]<35)
            pass=0;
        }
        avg=total/5.0f;
        percent=(total/500.0f)*100;

        printf("|%d\t\t%s\t%d\t%.2f\t%.2f%%\t\t%s|\n",roll[i],name[i],total,avg,percent,pass?"PASS":"FAIL");
        printf("------------------------------------\n");
    }
    printf("=====================================================\n");
}

int main(void)
{
    input();
    result();
    return 0;
}