#include<stdio.h>
int main()
{
	int c=0,n;
	printf("enter the digits");
	scanf("%d",&n);
	while(n!=0)
	{
	c++;
	n=n/10;
}
	

	printf("the counted digits%d",c);
}
