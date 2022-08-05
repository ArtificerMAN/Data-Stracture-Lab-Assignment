#include<stdio.h>
int main()
{
    int arr[]={12,40,50,30,20,35};
    int max=arr[0];
    int i, j=6, loc=1;
    printf("\nGiven array: \n");
    for(i=0;i<j;i++)
    {
        printf("%d\t",arr[i]);
    }
    for (i=1;i<j;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            loc=i;
        }
    }
    printf("\n\nMax value: %d\n\nLocation of the Max value: %d\n\n",max,loc);
    return 0;
}
