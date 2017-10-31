#include<stdio.h>
#include<stdlib.h>
int main()
{
		int N,num[100],k,m,j;
		scanf("%d",&N);
		scanf("%d",&num[j]);
		for(j=0;j<N-1;j++)
		{
			for(m=j+1;m<N;m++)
			{
			 if(num[j]>num[m])
			 {
			 k=num[j];
			 num[j]=num[m];
			 num[m]=k;
			 }
			}
		}
		printf("%d",num[(N+1)/2]);
     	return 0;
 } 
