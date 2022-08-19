#include<stdio.h>

int main(void)

{
        /* Four variables that the user inputs*/
        int a;
        int b;
        int c;
        int d;

        /* Equations the lab lists to solve */
        int SumBC;
        int ProductAD;
        int QuotientAC;
        int RemainderCD;
        int Equation1;  /* This equation is A * C / B + D */



        /* This reads the values from the user assigns them to the variables*/
        printf("Enter 4 Integers (A,B,C,D) seperated by spaces: ");
        scanf("%d %d %d %d",&a,&b,&c,&d);

        /*Initializes the equations*/
        SumBC = b + c;
        ProductAD = a * d;
        QuotientAC = a / c;
        RemainderCD = c % d;
        Equation1 = a*c/(b+d);

        /* Prints initial values of variables*/
        printf("Initial Values\n");
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
        printf("%d\n",d);

        /* Prints the results of the equations with the values plugged in*/
        printf("Calculated Values\n");
        printf("Sum of B and C is %d\n",SumBC);
        printf("The product of A and D is %d\n",ProductAD);
        printf("The quotient of A and C is %d\n",QuotientAC);
        printf("The remainder of C divided by D is %d\n",RemainderCD);
        printf("The result of A*C/B+D is %d\n",Equation1);


}
