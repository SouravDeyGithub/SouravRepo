#include <stdio.h>

void main()
{

    int arr[5];
    int i,j,n,counter=0;
    printf("Enter the Array Elements::\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (j=0;j<5;j++)
    {
        printf("a[%d] is : %d\n",j,arr[j]);
    }

    printf("Enter the Array Index you want to delete::\n");
    scanf("%d",&n);
    arr[n] = 0;

    printf("Array Elements after Deletion::\n");
    for (j=0;j<5;j++)
    {
        printf("a[%d] is : %d\n",j,arr[j]);
    }

    for (i=0;i<5;i++)
    {
        if (arr[i]== 0)
            counter = counter +1;
    }
    printf("Total Empty spaces available :: %d\n", counter);
    getch();
}
