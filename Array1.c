#include <stdio.h>

void main()
{

    int arr[5];
    int i,j;
    printf("Enter the Array Elements::\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (j=0;j<5;j++)
    {
        printf("a[%d] is : %d\n",j,arr[j]);
    }
    getch();
}
