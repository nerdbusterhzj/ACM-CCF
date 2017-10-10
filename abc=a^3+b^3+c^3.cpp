#include<stdio.h>
int main()
{
	int a,b,c,i,j;
	for(i=100;i<=999;i++)
	{
	    a=i/100;
 		b=(i%100)/10;
 		c=i%10;
 		j=a*a*a+b*b*b+c*c*c;
 		if(i==j)
			printf("%d\n",i);
    }     
	return 0;	
 } 

