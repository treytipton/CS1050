#include<stdio.h>

int main(void)
{
        /* Initializes variables*/
        int start=-151;
        int limit=-151;
        int counter1;
        int counter2;
        do{
                printf("Enter Start: ");
                scanf("%d",&start);
        } while(start>-1 || start<-150);

        do{
                printf("Enter Limit: ");
                scanf("%d",&limit);
        } while(limit>-1 || limit<-150);

        counter1=start;
        counter2=start;

        while(counter1<limit)
        {
                printf("%d ",counter1);
                counter1 = counter1 + 3;
        }

        while(counter2>limit)
        {
                printf("%d ",counter2);
                counter2 = counter2 - 3;
        }
}
