#include <stdio.h>
// read array size from keyboard
//reads array SIZE from KB  
int read_array_size(){
    int size;       //local variable
    printf("Enter the size of array[>4]:");
    scanf("%d",&size);
    return size;
}
int validate_array_size(int array_size){
    if (array_size>4){
        return 1;
    }else{
        return 0;
    }
}
int initialization_array(){
    
}
int main(){
    int isValid=1;  
    int arraySize;                                                                               
    //calling method & stores returned value
    //passing 'arraySize'; int array_size=arraySize
     while (isValid==1){
        arraySize=read_array_size();
        int Validate=validate_array_size(arraySize);
        if (Validate==1){

        break;
    }
     printf("Array is not valid please retry\n");
  }

int my_array[arraySize];
int sum=0;
for(int i=0;i<arraySize;i++){
    printf("Enter %d the element:",i+1);
    scanf("%d",&my_array[i]);
    sum+=my_array[i];
}
printf("Sum:%d",sum);
}
    








