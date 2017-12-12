#include<stdio.h>
#include<string.h>
int main()
{
	int num1=0,num2=0;
	char a[100]="attack";
	char s[100]="summon";
	char e[100]="end";
	int i,n,re=0;
	int danweiH[100][100];
	int danweiA[100][100];
	int tempA[1000],tempH[1000];
	scanf("%d",&n);
	int playerH[2]={30,30};
	int player=0; //player=0时为先手玩家的回合，=1时为后手玩家的回合 
	for(i=0;i<=n;i++)
	{
		char o[100],c[100];
		int n1,n2,n3,q;
		gets(o);
		if(player==0) q=1;
		else if(player==1) q=-1;
		if(sscanf(o,"%s %d %d %d",&c,&n1,&n2,&n3)==4)
		{
			if(strcmp(c,s)==0)
			{
				if(danweiH[player][n1]==0)
				{
					danweiA[player][n1]=n2;
					danweiH[player][n1]=n3;
				}
				else 
				{
					for(int j=n1;j<=7;j++)
					{
						tempA[j]=danweiA[player][j];
						tempH[j]=danweiH[player][j];
					}
					danweiA[player][n1]=n2;
					danweiH[player][n1]=n3;
					for(int j=n1;j<=7;j++)
					{
						danweiA[player][j+1]=tempA[j];
						danweiH[player][j+1]=tempH[j];
					}
				}		 
			}	
		}
		if(sscanf(o,"%s %d %d",&c,&n1,&n2)==3)
		{
			if(strcmp(c,a)==0)
			{
				if(n2!=0)
				{
					danweiH[player][n1]=danweiH[player][n1]-danweiA[player+q][n2];
					danweiH[player+q][n2]=danweiH[player+q][n2]-danweiA[player][n1]; 
					if(danweiH[player][n1]<=0)//本回合玩家有随从死亡 
					{
						danweiH[player][n1]=0;
						danweiA[player][n1]=0;	
						for(int j=n1;j<=7;j++)
						{
							tempA[j]=danweiA[player][j];
							tempH[j]=danweiH[player][j];
						}
						for(int j=n1;j<=7;j++)
						{
							danweiA[player][j]=tempA[j+1];
							danweiH[player][j]=tempH[j+1];
						}		
					}	
					if(danweiH[player+q][n2]<=0)//对手有随从死亡 
					{
						danweiH[player+q][n2]=0;
						danweiA[player+q][n2]=0;
						for(int j=n2;j<=7;j++)
						{
							tempA[j]=danweiA[player+q][j];
							tempH[j]=danweiH[player+q][j];
						}
						for(int j=n2;j<=7;j++)
						{
							danweiA[player+q][j]=tempA[j+1];
							danweiH[player+q][j]=tempH[j+1];
						}		
					}
				}
				if(n2==0)
				{
					playerH[player+q]-=danweiA[player][n1];
					if(playerH[player+q]<=0)//对手死亡 
					{
						if(player==0) re=1;
						if(player==1) re=-1;	
					}
				}			
			}	
		}
		if(1==sscanf(o,"%s",&c))
		{
			if(strcmp(c,e)==0)//end操作 
			{
				if(player==1) player=0;
				else if(player==0) player=1; 
			}
		}
	}
	printf("%d\n",re);
	printf("%d\n",playerH[0]);
	for(int j=1;j<=7;j++)
	{
		if(danweiH[0][j]>0) num1++;
	}
	printf("%d ",num1);
	for(int j=1;j<=7;j++)
	{
		if(danweiH[0][j]>0) printf("%d ",danweiH[0][j]);
	}
	printf("\n");
	printf("%d\n",playerH[1]);
	for(int j=1;j<=7;j++)
	{
		if(danweiH[1][j]>0) num2++;
	}
	printf("%d ",num2);
	for(int j=1;j<=7;j++)
	{
		if(danweiH[1][j]>0) printf("%d ",danweiH[1][j]);
	}
	return 0;	
 }
