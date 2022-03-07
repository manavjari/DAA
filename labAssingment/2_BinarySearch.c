#include<stdio.h>
#define MAX 100


int binarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

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

        if(binarySearch(arr,size,num)== -1)
        {
            printf("Not found \n");
        }
        else
        {
            printf("Present %d\n",binarySearch(arr,size,num));
        }

        tcase--;
    }
}

