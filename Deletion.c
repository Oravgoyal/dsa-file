#include <stdio.h>

int main()
{
    int a[20],n,k,item,i;
    void delete(int a[],int *,int k);
    printf("enter number of elements (<=2)=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the element a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter position of element you want to delete:");
    scanf("%d",&k);
    delete(a,&n,k-1);
    printf("element after deletion : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
     return 0;
}
void delete(int a[],int *sizel,int k){
    int nl=*sizel;
    int i;
    for ( i = k; i < nl-2; i++)
        a[i]=a[i+1];
*sizel=*sizel-1;
}