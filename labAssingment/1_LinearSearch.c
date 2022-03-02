#include<stdio.h>
#define MAX 100


int main()
{
    int arr[MAX],num;
    int tcase,i,size,j,k,index,flag;

    printf("Enter number of testcases : ");
    scanf("%d",&tcase);

    while(tcase!=0)
    {
        printf("Enter size: ");
        scanf("%d",&size);

        printf("Enter array elements :");
        for (j=0;j<size;j++)
        {
            scanf("%d",&arr[j]);
        }
        printf("Enter the element to be searched : ");
        scanf("%d",&num);

        for(k=0;k<size;k++)
        {
            if(arr[k]==num)
            {
                printf("Present %d\n",k+1);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Not Present");
        }
        tcase--;
    }
}
