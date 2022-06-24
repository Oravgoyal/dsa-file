#include <stdio.h>

int main()
{
    int a[20],n,k,item,i;
    void insert(int a[],int n, int k,int item);
    printf("enter number of elements (<=20)=");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter element[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter item to insert=");
    scanf("%d",&item);
    printf("enter index positionn for new item =");
    scanf("%d",&k);
    
     return 0;
}