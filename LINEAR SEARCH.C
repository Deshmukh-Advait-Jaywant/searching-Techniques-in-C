#include<stdio.h>
int Lsearch(int [],int,int);
int main()
{
	int ar[20],n,i,r,key;
	
	printf("enter number of numbers");
	scanf("%d",&n);
	
	printf("enter the numbers");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	printf("enter the element you want to search");
	scanf("%d",&key);
	
	r=Lsearch(ar,n,key);
	
	if(r==-1)
	{
		printf("element not found");
	}
	else
	{
		printf("element found");
	}
	return 0;
}

int Lsearch(int ar[],int n,int key)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(key==ar[i])
		{
			return i+1;
		}
	}
	return -1;
}
