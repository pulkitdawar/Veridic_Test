#include<stdio.h>

void main()
{
    int n,i,j;
    printf("Enter Number of Array Elements:");
    scanf("%d",&n);
    //int arr = (int*)malloc(sizeof(int)*n);
    int arr[n];
    printf("Enter Array Elements one-by-one:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    printf("\n\nSorted Array is\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
