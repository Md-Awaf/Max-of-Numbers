#include<stdio.h>
#include<stdlib.h>

    int n, *arr;


void main()
{
    int ans=0, i;

    printf("Enter the number of integers to compare:");
    scanf("%d",&n);
    printf("Enter the integers:\n");
    arr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
    {
        if(ans<arr[i])
        {
            ans = arr[i];
        }
    }
    printf("Largest integer is %d\n",ans);

    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    free(arr);
}