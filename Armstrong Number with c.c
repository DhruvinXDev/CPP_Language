#include<stdio.h>
void main()
{
    int num,n,sum=0,r;
    printf("Enter the number :");
    scanf("%d",&num);
    n=num;
    for(int i=0;n!=0;)
    {
       r=n%10;
       sum+=(r*r*r);
       n/=10;
    }
    if(sum==num)
        printf("Enter number are Armstrong Number");
    else
        printf("Enter number are not Armstrong Number");
}
