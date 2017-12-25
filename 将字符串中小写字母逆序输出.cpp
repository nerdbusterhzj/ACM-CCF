#include<stdio.h>
#include<string.h>
int main()
{
	int N,s[100],k,l;
	char c[100];
	char n[100][100];
	scanf("%d\n",&N);
	for(int i=0;i<N;i++)
	{	
		k=0;
		gets(c);
		l=strlen(c); 
		for(int j=l-1;j>=0;j--) if(c[j]>='a'&&c[j]<='z') printf ("%c",c[j]);
		printf("\n");
	}
	return 0;	
}
