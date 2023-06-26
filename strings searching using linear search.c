#include<stdio.h>
int Lsearch();
int main()
{
	int i,r,n,o;
	char str[4][10],a,key[10];
	
	printf("enter the number of strings");
	scanf("%d",&n);
	
	printf("enter the strigs");
	for(i=0;i<=n-1;i++)
	{
		
			scanf("%s",&str[i]);
		
	}
	printf("\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\n",str[i]);
	}
	
	printf("enter the string to search");
	scanf("%s",&key);
	r=Lsearch(str,key,n);
	//printf("%d",r);
	if(r==-1)
	{
		
		printf("element not found");
	}
	else
	{
		printf("eement found %d position",r);
	}
	return 0;
}

int Lsearch(char str[4][10],char key[],int n)
{
	int i;
	
	//printf("%s",key);
	for(i=0;i<=n-1;i++)
	{
		if(strcmp(key,str[i])==0)
		{
			return i+1;
		}
	}
	return -1;
}
