#include <stdio.h>
#include <stdlib.h>

int main()
{
      //num is the input number
      //sum is the sum of divisors
    printf("please ENTER a number to CHECK if perfect or not\n");
    int num;
    int divisor=1;
    int sum=0;
    scanf("%d",& num);
    while (divisor<num)
    {
        if(num%divisor==0)
            sum=sum+divisor;
        divisor=divisor+1;

    }
    if (sum==num)
        printf("yes it is perfect");
    else
        printf("no,not perfect");

}
