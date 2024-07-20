#include <stdio.h>

int main() {
    int r,sum=0,n,num;
    printf("enter the n");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(num==sum)
        printf("%d is a palindrome",num);
        else
        printf("%d is not a palindrome",num);

    return 0;
}
