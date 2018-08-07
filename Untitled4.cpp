#include<stdio.h>
int main()
{
	int n,r,s=0;
	printf("enter the no.");
	scanf("%d",&n);
	while(n!=0)
	{
	
	r=n%10;
	n=n/10;
	s=s*10+r;}
	printf("the reverse no. %d",s);
}
