#include<stdio.h>

void Fibonacci(int first, int second, int i)
{
    if(i<=n && i>2)
    {
        int new=first+second;
        printf("%d ",new);
        Fibonacci(second,new,i++);
    }
    else if(i==1)
    {
        printf("%d %d ",first,second);
        i+=2;
        Fibonacci(first,second,i);
    }
    else
        return;
}

void main()
{
    static int n;
    printf("Enter the number of Fibonacci Numbers: ");
    scanf("%d", &n);
    Fibonacci(1,1,1);
    return 0;
}
