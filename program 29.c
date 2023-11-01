#include<stdio.h>
void main()
{
	int i, arr[50],n,num;
	printf("\n Enter no. of elements:");
	scanf("%d",&num);
	printf("\n Enter the value:");
	for(i=0;i<=num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
}
