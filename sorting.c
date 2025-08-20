//Bubble sort algorithm
#include<stdio.h>
int main()
{
	int i,round,t,n;
	printf("Enter no. of array Elements :");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements :");
	for(i=0;i<=n-1;i++)
	    scanf("%d",&a[i]);
	for(round=1;round<=n-1;round++)
	{
		for(i=0;i<=n-1-round;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("The sorted elements are :");
	for(i=0;i<=n-1;i++)
	    printf("%d ",a[i]);
	printf("\n The second largest element is %d",a[n-2]);
	return 0;
}
