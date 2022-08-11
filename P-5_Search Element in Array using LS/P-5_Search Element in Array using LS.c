#include<stdio.h>
int main()
{
    while(1)
    {
        int arr[]={5, 17, 22, 35, 41};
        int x;
        int i, n=5, flag=0;
        printf("\nThe given array is: ");
         for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n\nEnter the data to search: ");
        scanf("%d",&x);
        for(i=0;i<n;i++)
            if(x==arr[i])
        {
           printf("\nFound\n");
            flag=1;
        }
        if(flag==0)
            {
        printf("\nNot Found\n");
        return 0;
            }
    }
}
