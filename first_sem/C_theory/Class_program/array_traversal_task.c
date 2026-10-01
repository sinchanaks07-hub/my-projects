#include <stdio.h>
// read array size from keyboard
int main(){
  int arraySize=read_array_size();      //calling method & stores returned value
  int isValid=validate_array_size(arraySize);       //pssing 'arraySize'; int array_size=arraySize
  if (isValid==0){
     
  }
}
//reads array SIZE from KB  
int read_array_size(){
    int size;       //local variable
    printf("Enter the size of array[>4]:");
    scanf("%d",&size);
    return size;
}
int validate_array_size(int array_size){
    if (array_size>5){
        return 1;
    }else{
        return 0;
    }
}
int initialization(){

}



