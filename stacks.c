#include <stdio.h>
#include <stdlib.h>
#define size 20
int stack[size],top=-1;
int push(int x)
{
	if(top==size-1)
	{
		printf("Stack Overflow");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("Stack Underflow");
	}
	else
	{
		printf("Deleted Element: %d\n", stack[top]);
		stack[top]=0;
		top--;
	}
}
void display()
{
	int i;
	printf("Stack: ");
	for(i=0;i<=top;i++)
	{
		printf("%d ", stack[i]);
	}
	printf("\n");
}
int main()
{
	int ch,v,flag=0;
	while(flag==0)
	{
		printf("Enter 1 to push\nEnter 2 to pop\nEnter 3 to dispay\nEnter 4 to exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("Enter a value: ");
					scanf("%d",&v);
					push(v);
					break;
			case 2:
						pop();
				
				
					break;
			case 3:
					display();
					break;
			case 4:
					flag=1;
					break;
			default:
					printf("Wrong Input");
					break;
		}
	}
	return 0;
}
