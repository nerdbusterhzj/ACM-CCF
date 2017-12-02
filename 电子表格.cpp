#include<stdio.h>
#include<string.h> 
int main()
{
	int r,c,n,s[100][100],st[100][100],temp[100][100],b,d;//r––c¡– 
	char a[100];
	char g[100];
	char o1[10]="SR";
	char o2[10]="SC";
	char o3[10]="DR";
	char o4[10]="DC";
	char o5[10]="IR";
	char o6[10]="IC";
	scanf("%d%d",&r,&c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	int num;
	scanf("%d",&num);
	for(int q=0;q<=num;q++)
	{
		gets(g);
	    if(3==sscanf(g,"%2s %d %d",&a,&b,&d))
	 {
	    if(strcmp(a,o1)==0)
	   {
		for(int j=0;j<c;j++)
		{
			temp[b-1][j]=s[b-1][j];
			s[b-1][j]=s[d-1][j];
			s[d-1][j]=temp[b-1][j];
		}
	   }
	   if(strcmp(a,o2)==0)
	   {
	   	for(int i=0;i<r;i++)
	   	{
	   		temp[i][b-1]=s[i][b-1];
	   		s[i][b-1]=s[i][d-1];
	   		s[i][d-1]=temp[i][b-1];
		}
	   }
     }
     if(2==sscanf(g,"%2s %d",&a,&b))
	 {
	 	if(strcmp(a,o3)==0)
	 	{
	 		r=r-1;
	 		for(int i=b-1;i<r;i++)
	 		{
	 		  for(int j=0;j<c;j++)
			   {
			   	s[i][j]=s[i+1][j];
				}	
			 }
		 }
	 	if(strcmp(a,o4)==0)
	 	{
	 		c=c-1;
	 		for(int j=b-1;j<c;j++)
	 		{
	 			for(int i=0;i<r;i++)
	 			{
	 				s[i][j]=s[i][j+1];
				 }
			 }
		 }
	 	if(strcmp(a,o5)==0)//IR
	 	{
	 		for(int i=0;i<r;i++)
	 		{
	 			for(int j=0;j<c;j++)
	 			{
	 				st[i][j]=s[i][j];
				 }
			 }
	 		for(int j=0;j<c;j++)
	 		{
	 			s[b-1][j]=0;
			 }
			r=r+1;
	 		for(int i=b;i<r;i++)
	 		{
	 			for(int j=0;j<c;j++)
	 			{
	 				s[i][j]=st[i-1][j];
				 }
			 }
		 }
	 	if(strcmp(a,o6)==0)//IC
	 	{
	 		for(int i=0;i<r;i++)
	 		{
	 			for(int j=0;j<c;j++)
	 			{
	 				st[i][j]=s[i][j];
				 }
			 }
			 for(int i=0;i<r;i++)
			 {
			 	s[i][b-1]=0;
			 }
			 c=c+1;
			 for(int i=0;i<r;i++)
			 {
			 	for(int j=b;j<c;j++)
			 	{
			 		s[i][j]=st[i][j-1];
				 }
			 }
		 }
	  } 	
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
