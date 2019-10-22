#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 5


int main()
{
	int ch;
	
	while(1)	
	{
		printf("\nStack Table");
		printf("\nEnter the following keys to perform that operation");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter the number:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
}
 

