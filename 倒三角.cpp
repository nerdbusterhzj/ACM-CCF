#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s,m;
	printf("��������=");
	scanf("%d",&s);
	for(m=1;m<=s;m++)
	{
	 int i,j,n;
	 printf("�����������β���n=");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<i;j++)
	 	printf(" ");
	 	for(j=0;j<2*(n-i)-1;j++)
	 	printf("*"); 
		printf("\n"); 	
	 }
	}
    system("pause");
	return 0;
 } 
