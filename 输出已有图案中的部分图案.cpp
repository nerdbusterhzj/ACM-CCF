#include<stdio.h>
#include<string.h>
int main()
{
	char a[10][10];
	memset(&a,'-',100);
	a[0][2]='*';
	a[0][3]='*';
	a[0][5]='*';
	a[0][6]='*';
	a[1][1]='*';
	a[1][4]='*';
	a[1][7]='*';
	a[2][1]='*';
	a[2][7]='*';
	a[3][2]='*';
	a[3][6]='*';
	a[4][3]='*';
	a[4][5]='*';
	a[5][4]='*';
	int x,y,w,h;
	scanf("%d%d%d%d",&x,&y,&w,&h);
	if(x<1||x>9||y<1||y>6||w<1||w>9||h<1||h>6||(x+w)<2||(x+w)>10||(y+h)<2||(y+h)>7) printf("Input Error");
	else
	{
		for(int i=y-1;i<y+h-1;i++)
		{
			for(int j=x-1;j<x+w-1;j++)
			{   
				if(j==x+w-2) printf("%c\n",a[i][j]);
				else printf("%c",a[i][j]);
			}
		}	
	}
	return 0;
}

