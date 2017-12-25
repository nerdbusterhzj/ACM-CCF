#include<stdio.h>
typedef struct{
	int num;
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	float sum;
} singer;
int main()
{
	singer s[10];
	float temp;
	int tempn;
	for(int i=0;i<10;i++)
	{
		s[i].num=i+1;
		scanf("%f%f%f%f%f%f",&s[i].a,&s[i].b,&s[i].c,&s[i].d,&s[i].e,&s[i].f);
		s[i].sum=(s[i].a+s[i].b+s[i].c+s[i].d+s[i].e+s[i].f)/6;
	}
	for(int i=0;i<9;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(s[i].sum>s[j].sum)	
			{
				temp=s[i].sum;
				tempn=s[i].num;
				s[i].sum=s[j].sum;
				s[i].num=s[j].num;
				s[j].sum=temp;
				s[j].num=tempn;
			}
		}
	}
	for(int i=0;i<9;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(s[i].sum==s[j].sum&&s[i].num<s[j].num)	
			{
				tempn=s[i].num;
				s[i].num=s[j].num;
				s[j].num=tempn;
			}
		}
	}
	for(int i=9;i>=0;i--)
	{
		printf("%d %.2f\n",s[i].num,s[i].sum);
	}
	return 0;
}
