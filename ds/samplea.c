#include<stdio.h>
int main()
{
int i,n,sum=0,a[n];
printf("\n enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the number :");
scanf("%d",&a[i]);
sum=sum+a[i];

}
printf("\n the result %d",sum);
return 0;
}




