#include<stdio.h>
int insert(int val,int index,int *,int l)
int search(int val,int *,int l)
int main()
{
int i,l,c,pos,value;
int a[10];
int *p;
printf("Enter the limit less than 10 :");
scanf("%d",a[i]);
for(i=0;i<l;i++)
{
printf("Enter the number %d :",i+1);
scanf("%d",&a[i]);
}
p=a;
for(i=0;i<l;i++)
{
printf("%d",*p)
p++;
}
printf("\n");
printf("Select your choice : \n");
printf("1.Insert : \n");
printf("2.Search : \n");
scanf("%d",%c);
switch(c)
{
	case 1:printf("Enter the position :");
		scanf("%d",&pos);
		printf("Enter the value to insert :");
		scanf("%d",&value);
		insert(pos,a,l,value);
		break;


	case 2:printf("Enter element to search :");
		scanf("%d",&value);
		search(element,a,l);
		break;
	
	default("Enter the Valid Option : ");

}
}

