#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter the no.");
	scanf("%d",&a);
	printf("enter the another no.");
	scanf("%d",&b);
	for(i=a;i<a+b;i++)
{
if(i%b==0)
printf(" the no. obtained %d",i);
	}	
	
	
}
