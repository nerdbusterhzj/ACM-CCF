#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
   {
	char a[1000],b[1000],c[1001],tempa[1001],tempb[1001],sum[1001];
	int s1=0,s2=0;
	scanf("%s%s",&a,&b);
	s1=strlen(a);
	s2=strlen(b);
    int j=0,ml=0,plus=0,boom=0,num=0;
    for(int i=s1-1;i>=0;--i)
    {
    	tempa[j++]=a[i];
	}
	tempa[j]='\0';
	j=0;
	for(int i=s2-1;i>=0;--i)
	{
		tempb[j++]=b[i];
	}
	ml=(s1>s2)?s1:s2;
	if(s1<s2)
	{
		for(int i=s1;i<s2;++i)
		{
			tempa[i]='0';
			
		}
		tempa[s2]='\0';
	}
	else if(s1>s2)
	{
		for(int i=s2;i<s1;++i)
		{
			tempb[i]='0';
		}
		tempb[s1]='\0';
	}
	for(int i=0;i<ml;i++)
	{
		num=tempa[i]-'0'+tempb[i]-'0'+plus;
		if(num>9)
		{
			if(i==(ml-1)) boom=1; 
			plus=1;
			sum[i]=num-10+'0';
		} 
		else
		{
			plus=0;
			sum[i]=num+'0';
	    }
	}
	if(boom==1) sum[ml++]=plus+'0';
	sum[ml]='\0';
	for(int i=ml-1;i>=0;--i)
	{
		printf("%c",sum[i]);
	}
	printf("\n");
   }
	return 0;
 } 
