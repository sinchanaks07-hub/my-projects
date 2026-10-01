//Pgm to store and display 5 subjects mark

#include<stdio.h>
int main(){
                int my_marks[5];         // integer array of size 5
    int sub_marks[5];       // declare an array 'sub_marks'
        //with SIZE 5 of 'int' type
        //Storing data/Array initialization - array_name[index]=data/value;
        sub_marks[0]=80;    //Storesw '80' in an array position whose index is '0' 
        sub_marks[1]=78;    
        sub_marks[2]=68;
        sub_marks[3]=58;
        sub_marks[4]=88;    //static array initialization
        //fetch first array element from 'sub_marks'
        printf("First Subject mark:%d\n",sub_marks[0]);
        printf("First Subject mark:%d\n",sub_marks[1]);
        printf("First Subject mark:%d\n",sub_marks[2]);
        printf("First Subject mark:%d\n",sub_marks[3]);
        printf("First Subject mark:%d\n",sub_marks[4]);
        // dynamic initialisation of 'my_marks'
        for(int i=0;i<5;i++){
             printf("Enter %d subject marks:[int data]",i+1);
             scanf("%d",&my_marks[i]);   
        }
        
        
        printf("My sub1 mark:%d\n",my_marks[0]);
        printf("My sub2 mark:%d\n",my_marks[1]);
        printf("My sub3 mark:%d\n",my_marks[2]);
        printf("My sub4 mark:%d\n",my_marks[3]);
        printf("My sub5 mark:%d\n",my_marks[4]);

}



