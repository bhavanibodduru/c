#include <stdio.h>

int main() 
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d num is even",num);
    else
    printf("%d num is odd ",num);

    return 0;
}
