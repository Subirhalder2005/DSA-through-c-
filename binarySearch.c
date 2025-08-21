#include<stdio.h>
#include<stdlib.h>
int itSearch(int a[],int n,int target)
{
	int l=0,r=n-1,mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(a[mid]==target)
		   return mid;
		else if(a[mid]<target)
		   l= mid+1;
		else
		   r=mid-1;
	}
	return -1;
}
int recurSearch(int b[],int low,int high,int find)
{
	int cen;
	if(low<=high){
	    cen=(low+high)/2;
	if(b[cen]==find)
	    return cen;
	else if(b[cen]>find)
	    return recurSearch(b,low,cen-1,find);
	else
	    return recurSearch(b,cen+1,high,find);
	}
	return -1;
}
int main()
{
	int n,key,i,x,ch,y;
	printf("Enter array size :");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements in sorted way:\n");
	for(i=0;i<n;i++)
	    scanf("%d" ,&a[i]);
	printf("Enter element to search :");
	scanf("%d",&key);
	printf(" \npress 1 for iteration search \npress 2 for recursion search \npress 3 for exit \n");
	while(1)
	{
	    printf("Enter your choice:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:
	             x=itSearch(a,n,key);//function call
	             if(x== -1)
	                 printf("Element not found \n");
	             else
	                 printf("Element found at index %d \n",x);
	             break;
	        case 2:
	        	y=recurSearch(a,0,n-1,key);
	        	if(y== -1)
	        	    printf("Element not found \n");
	        	else
	        	    printf("Element  found at index %d \n",y);
	        	  break;
	        case 3:
	        	 exit(0);
	    }
    }
	return 0;
}
