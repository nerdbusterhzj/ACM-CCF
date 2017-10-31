#include<stdio.h>
int sushu(int a);
int sushu(int a)
{
	int b,j=0,y=0;
	if(a==1||a==0) y=0;
	else if(a>1)
	{
		for(b=2;b<a;b++)
		{
			if(a%b==0) j++; 
		 } 
		if(j==0) y=1;
	}
  return y;
}
int main()
{
	int max,z,k=0;
	scanf("%d",&max);
    for(int i=1;i<max;i++)
    {
    	z=sushu(i);
        if(z==1) k=k+i;
	}
	printf("%d",k);
}
