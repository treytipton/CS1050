#include<stdio.h>
int InitializeArray(int array[],int begin,int end,int increment);/*Initializes the arrays*/
int PrintArray(int array[],int size);/*I used this function to test my other functions*/
int MultiplyArrays(int array1[],int array2[],int array3[],int size);/*Multiplies two arrays together and creates a third array. */
int PrintMultiplyResults(int array1[],int array2[],int array3[],int size1,int size2); /*Prints the results from multiplying two arrays*/

int main(void){
        int array1[100];
        int array2[100];
        int array3[100];
        int size1=0;
        int size2=0;

        size1=InitializeArray(array1,0,30,3);
        size2=InitializeArray(array2,3,53,5);
        MultiplyArrays(array1,array2,array3,size1);
        printf("\nFirst Arrays:");
        PrintMultiplyResults(array1,array2,array3,size1,size2);

        size1=InitializeArray(array1,22,0,2);
        size2=InitializeArray(array2,84,7,7);
        MultiplyArrays(array1,array2,array3,size1);
        printf("\nSecond Arrays:");
        PrintMultiplyResults(array1,array2,array3,size1,size2);


}

int InitializeArray(int array[],int begin,int end,int increment){
        int i;
        int counter=0;
        int size=-1;

        if (begin<=end)
        {  
           for(i=begin;i<=end;i+=increment){
                        array[counter]=i;
                        counter++;
                        size++;
                }
        }
        else if(begin>end)
        {  
           for(i=begin;i>=end;i-=increment){
                        array[counter]=i;
                        counter++;
                        size++;

                }
        }
        return size;
}

int PrintArray(int array[],int size){
        int element;
        int i;

        for(i=0;i<=size;i++){
                element=array[i];
                printf("Element %d = %d\n",i,element);

        }
        return 0;
}

int MultiplyArrays(int array1[],int array2[],int array3[],int size){
        int i;

        for(i=0;i<=size;i++){
                array3[i]=array1[i]*array2[i];
        }
        return size;
}

int PrintMultiplyResults(int array1[],int array2[],int array3[],int size1,int size2){
        int i=0;
        int max=0;
        int elementSize1;
        int elementSize2;
        if(size1>size2)
        {
                max=size1;
        }
        else
        {
                max=size2;
        }
        elementSize1=size1+1;
        elementSize2=size2+1;

        printf("\n%d elements in the first input array.\n",elementSize1);
        printf("%d elements in the second input array.\n",elementSize2);

        for(i=0;i<=max;i++){
                printf("Array 1 Element %d = %d Array 2 Element %d = %d Array 3 Element %d = %d \n",i,array1[i],i,array2[i],i,array3[i]);
        }
        return 0;
}
