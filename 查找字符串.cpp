#include<stdio.h>
#include<string.h>
int main()
{
	int n,s=0,z;
	scanf("%d",&n);
	char stringArray[10][100],targetString[100];
	for(int i=0;i<n;i++)
	{
	  scanf("%s",&stringArray[i]);	
	}
	scanf("%s",&targetString);
	for(int i=0;i<n;i++)
	{
		z=strcmp(stringArray[i],targetString);
		if(z==0) s++;		
	}
	printf("%d",s);
	return 0;
}
