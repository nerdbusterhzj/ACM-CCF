#include<stdio.h>
int main()
{

	int i,j=1,k=1,s=0,n=0;
	scanf("%d",&i);
	while(i/k!=0)
	{
		if(i/k>0) s++;
		k=k*10;
	}
	for(int a=1;a<s;a++)
	{
		j=j*10;
	}
	while(j>=1)
	{
		if(i/j==1) n++;
		i=i%j;
		j=j/10;
	}
	printf("%d",n);
 } 
