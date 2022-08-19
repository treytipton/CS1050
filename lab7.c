#include<stdio.h>

//Prototypes go here
int GetIntArray(int array[]);
void PrintArray(int array[], int count);
int TotalArray(int array[], int count);
float AvgArray(int array[], int count);

int main(void){
        int array[256];
        int length=0;

        length = GetIntArray(array);

        PrintArray(array,length);
        printf("Total of array = %d\n",TotalArray(array,length));
        printf("Average of array = %.2f\n ",AvgArray(array,length));
}

int GetIntArray(int array[]){
        int i=0;
        int UserNumber=0;
        int length=0;

        printf("Enter the number of elements in the array: ");
        scanf("%d",&length);
        length-=1;

        for(i=0;i<=length;i++){
                printf("\tEnter integer #%d: ",i);
                scanf("%d",&UserNumber);
                *(array+i)=UserNumber;
        }
        return length;
}

void PrintArray(int array[], int length){
        int i;

        printf("Here are the %d elements of your array:\n",length+1);

        for(i=0;i<=length;i++){
        printf("\tElement %d = %d\n",i,*(array+i));

        }

}

int TotalArray(int array[], int length){
        int i;
        int sum=0;
        int element=0;

        for(i=0;i<=length;i++){
                element = *(array+i);
                sum+=element;
        }

        return sum;
}

float AvgArray(int array[], int length){
        int i;
        float sum=0;
        int element=0;
        float avg;

        for(i=0;i<=length;i++){
                element = *(array+i);
                sum+=element;
        }
        avg = sum/i;

        return avg;
}
