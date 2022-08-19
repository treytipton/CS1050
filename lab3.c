#include<stdio.h>

int main(void)
{

        /* Initalize variables*/
        int counter = 51;
        /* Loop until the counter hits 1  */
        while (counter >= 1){
                /*Checks if it is both divisble by 3 and 5 first, if not it skips it.*/
                if (counter%3 == 0&&counter%5==0){
                        printf("TF\n");
                }
                else{
                        if (counter%3==0){/*Checks if the number is divisble by 3*/
                                printf("T\n");
                        }
                        else{
                        if (counter%5==0){/*Checks if the number is divisble by 5*/
                                printf("F\n");
                        }
                        else{/*If the numbers are not divisble by 3 or 5 they it prints the integer*/
                                printf("%d\n",counter);
                                }}}
                /* Subtracts the variable the loop is dividing by, by 2 so that the numbers stay odd*/
                counter = counter - 2;
        }
}
