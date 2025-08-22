//selection sort algorithm
#include<stdio.h>
int main()
{
    int i,j,n,min,t;
    printf("Enter array size :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements of array :");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                 min=j;
        }
        t=a[min];
        a[min]=a[i];
        a[i]=t;
        
    }
    printf("The sorting elements are:");
    for(j=0;j<n;j++)
        printf("%d ",a[j]);
    return 0;
}