#include<stdio.h>
int main()
{
    int row, clm, srch, i, j, flag=0;
    printf("Enter rows : ");
    scanf("%d",&row);
    printf("\nEnter columns : ");
    scanf("%d",&clm);
    int array[row][clm];
    printf("\nEnter %d elements :\n",(row*clm));
    for(i=0;i<row;i++){
        for(j=0;j<clm;j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("\nThe array is :\n");
    for(i=0;i<row;i++){
        for(j=0;j<clm;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter an element to search in the array : ");
    scanf("%d",&srch);
    for(i=0;i<row;i++){
        for(j=0;j<clm;j++){
            if(array[i][j]==srch){
                printf("\n\nFound\n\n");
                flag=1;
            }
        }
    }
    if(flag==0)
        {
    printf("\n\nNot Found\n\n");
        }
    return 0;
}
