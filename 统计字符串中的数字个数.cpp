#include<stdio.h>
int main()
{
	char s[100000],a,n=0,k;
	gets(s);
	for(int i=0;i<1000;i++)
	{
		if(s[i]>=48&&s[i]<=57)
		{
			n++;
			a=0;
			k=1;
			while(s[i+k]>=48&&s[i+k]<=57)
			{
				k++;
				a++;
			}
			i=i+a;
		}
	}
	printf("%d",n);
	return 0;
}
