#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("i=");
	scanf("%d",&i);
	if(i<=1)
	{
		printf("i must > 1");
	}
	else
	{
		for(j=1;j<i;j++)
	   {
		m=100;
		for(n=1;n<i;n++)
		   m=m*i+n*i;
		   printf("%d=%d.\n",j,m);
		   
	    }
	}
	return 0;
 } 
