#include<stdio.h>
main()
{
    int arr[50];
    int n, i, j;
    printf("Enter the size of the list: ");
    scanf("%d",&n);
    printf("\nEnter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The data in the list are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the position of data to delete: ");
    scanf("%d",&j);
    while(j<n)
    {
        arr[j-1]=arr[j];
        j++;
    }
    n-=1;
    printf("\nThe list of data after deletion are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
