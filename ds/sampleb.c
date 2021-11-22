#include<stdio.h>
int main()
{
int i,n=0,sum=0,a[n];
float avg;

printf("\n enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the number :");
scanf("%d",&a[i]);
sum=sum+a[i];

}
printf("the result %d \n",sum);
avg=sum/n;
printf("\n the average of numbersis %f",avg);
return 0;
}
