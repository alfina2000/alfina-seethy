#include<stdio.h>
int main()
{
int a[3]={1,2,3};
int b[10],i;
printf("enter the values for array b\n");
for(i=0;i<10;i++)
{ 
b[i]=i;
}
printf("values in a[2]%d\n",a[2]);
printf("values in array b\n");
for(i=0;i<10;i++)
printf("%d\n",b[i]);
}


