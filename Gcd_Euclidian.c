#include<stdio.h>
main()
{
int a,b,r;

scanf("%d",&a);
scanf("%d",&b);


for(r=a%b;r!=0;r=a%b)
{
 a=b;
 b=r;
}

printf("%d",b);
}
