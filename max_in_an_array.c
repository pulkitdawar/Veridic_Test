#include<stdio.h>

void main()
{
    int n;
    printf("Enter Number of Array Elements:");
    scanf("%d",&n);
    //int arr = (int*)malloc(sizeof(int)*n);
    int arr[n];
    printf("Enter Array Elements one-by-one:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max=0;
    for(int i=0;i<n;i++)
        if(max<arr[i])
            max=arr[i];

    printf("The Max value in the Array is %d",max);
    return 0;
}
