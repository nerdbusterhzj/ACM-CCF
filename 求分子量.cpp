#include<stdio.h>
#include<stdlib.h>
int main()
{
	int T,t,j,M[10];
	scanf("%d",&T);
	for(t=1;t<=T;t++)
	{
		char c[10];
		scanf("%s",&c);
		int i,j1=0,j2=0,j3=0;
		for(i=0;i<10;i++)
		{
			if(c[i]=='C') j1++;
			if(c[i]=='H') j2++;
			if(c[i]=='O') j3++;
		}
		M[t]=j1*12+j2*1+j3*16;
	}	
	for(j=1;j<=T;j++)
	printf("%d\n",M[j]);
	system("pause");
	return 0;	
 } 
