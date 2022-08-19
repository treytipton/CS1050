#include<stdio.h>
int RoundToFloat(float f);
int RoundIntToNearestMultipleOf3(int i);


int main(void)
{
        printf("**** Testing RoundToFloat ****\n");
        RoundToFloat(1.1);
        RoundToFloat(1.2);
        RoundToFloat(1.3);
        RoundToFloat(1.4);
        RoundToFloat(1.45);
        RoundToFloat(1.50);
        RoundToFloat(1.51);
        RoundToFloat(2371.49);
        RoundToFloat(2371.50);

        printf("**** Testing RoundIntToNearestMultipleOf3 ****\n");
        RoundIntToNearestMultipleOf3(1);
        RoundIntToNearestMultipleOf3(2);
        RoundIntToNearestMultipleOf3(3);
        RoundIntToNearestMultipleOf3(4);
        RoundIntToNearestMultipleOf3(5);
        RoundIntToNearestMultipleOf3(6);

}

int RoundToFloat(float f){
        int x = (f+.5);
        x/=1;
        printf("%.2f rounded to %d\n",f,x);
        return x;
}

int RoundIntToNearestMultipleOf3(int i){
        int x = (i+1.5);
        x/=3;
        x*=3;
        printf("%d rounded to nearest multiple of 3 = %d\n",i,x);
        return x;
}
