#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pop();
void display();
void main()
{
int ch;
while(1)
{
printf("\n ***Stack Menu***");
printf("\n\n 1.push\n 2.pop \n 3.display \n4.Exit");
printf("\nEnter your choice(1-4) :");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3:display();
break;
case 4:exit(0);
break;
default : printf("\n Wrong Choice !");
}
}
}
void push()
{
int val;
if(top==MAX-1)
{
printf("\nStack is full");
}
else
{
printf("\n Enter the element to push :");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}

void pop()
{
if(top==-1)
{
printf("\n Stack is empty");
}
else
{
printf("\n Deleted element is %d",stack[top]);
top=top-1;
}
}

void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty !");
}
else
{
printf("\nStack is....\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}



