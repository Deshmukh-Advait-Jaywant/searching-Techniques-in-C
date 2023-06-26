#include<stdio.h>
int Bsearch();
int main()
{
	int n,i,r;
	char str[10][10],key[10];
	printf("enter number of strings");
	scanf("%d",&n);
	
	printf("enter the string");
	for(i=0;i<=n-1;i++)
	{
		scanf("%s",&str[i]);
	}
	
	printf("\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s",str[i]);
	}
	
	printf("enter the string you want to search");
	scanf("%s",&key);
	
	r=Bsearch(str,n,key);
	
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
int Bsearch(char str[10][10],int n,char key[])
{
	int low,high,mid;
	
	low=0;
	high=n-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(strcmp(key,str[mid])==0)
		{
			return mid+1;
		}
		else if(strcmp(key,str[mid])==-1)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}
