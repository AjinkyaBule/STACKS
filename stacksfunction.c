#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 5
int tos=-1,stack[MAX];
void push()
{
	int val;
	
	if(tos==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		tos=tos+1;
		stack[tos]=val;
	}
}
 
void pop()
{
	if(tos==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[tos]);
		tos=tos-1;
	}
}
 
void display()
{
	int i;
	
	if(tos==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=tos;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
