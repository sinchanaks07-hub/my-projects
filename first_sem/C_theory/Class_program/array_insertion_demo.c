



#include <stdio.h>
int main(){
    int index;
    int newElement;
    int element[5];
    for(int i=0;i<4;i++){
      printf("Enter %d the array element:",i+1);
      scanf("%d",&element[i]);  
    }
    printf("Enter the new element:");
    scanf("%d",&newElement);

    printf("Enter index value:");
    scanf("%d",&index);
    //insertion process to insert 'newElement' at index'index'
    element[4]=element[3];
    element[3]=element[2];
    element[2]=newElement;
    for(int i=0;i<=4;i++){
    printf("%d\t",element[i]);
    }
}






