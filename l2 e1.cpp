#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{ 
char *s[20];
char name[30];
int m;
cout<<"enter the no. of names of students";
cin>>m;
int *a;
a=&m;
for(int i=0;i<*a;i++)
{
	cout<<"enter student name";
	cin>>name;
	int length=strlen(name);
	 str[i]=new char[length+1];
	strcpy(*(s+i),name);
	cout<<*str[i];
	}}
	void printlist(char s*[],int *a)
	{
	int pos;
	cout<<"enter the position to insert the name"<<endl;
	cin>>pos;
	
	
	
	cout<<"enter the student name"<<endl;
	cin>>name;

	for(i=*(a)-1;i>=pos-i;i++)
	{
		*(s+i+1)=*(s+i);
		*(s+pos-1)=name;
		
		(*a)++;
		cout<<"insertion successful";
	}
	void deletename(char*s[],int*a)
	{
		char name[30];
		cout<<"enter name to be deleted"<<endl;
		cin>>name;
		for(i=0;i<*a;i++)
		{
			if(strcmp(*(s+i),name)==0)
			{
				for(int j=i;j<=(*a)-1;j++)
				{
					*(s+j)=*(s+j+1);
					(*a)--;
				}
			}
		}
	
	return 0;
	getch();
	
}
