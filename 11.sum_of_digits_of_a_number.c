#include<stdio.h>

int main ()
{
    int num,rem, sum = 0;
    printf("enter the number");
    scanf("%d",&num);
 
    

    //loop to find sum of digits
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num = num / 10;
    }
    printf("The number is = %d\n",sum);
}
 
