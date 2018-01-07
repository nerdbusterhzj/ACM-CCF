#include <stdio.h>
#include <string.h>
char s[101][101],ans[101][101];
int n,i,j,k,found;
void sort()//子串排序 
{
	for(i=1;i<found;++i)
		for(j=i+1;j<=found;++j)
			if(strcmp(ans[i],ans[j])==1)
			{
				char temp[101];
				strcpy(temp,ans[i]);
				strcpy(ans[i],ans[j]);
				strcpy(ans[j],temp);
			}
}
void deal()
{
	int len=strlen(s[1]);//第一个字符串的长度 
	for(k=len;k>=1;--k)//从最后一个字符开始 
	{
		for(i=0;i<=len-k;++i)
		{
			char temp[101]={0};
			int l=0;
			for(j=i;j<i+k;++j)//暴力将第一个字符串中的所有字串提取出来 
			{
				temp[l++]=s[1][j];
			} 
			temp[l]='\0';//结束 
			for(j=2;j<=n;++j)//与后面的字符串比对字串 
			{
				if(strstr(s[j],temp)==NULL) break;//没有比对到就换下一个字串 
			}
			if(j==n+1)//每一个字符串都比对到了这个字串 
				strcpy(ans[++found],temp);//将这个字串存入 
		}
		if(found) break;//如果都找完了就结束循环（found是找到的公共字串数量） 
	}
	sort();//对字串进行排序 
}
int main()
{
	scanf("%d",&n);
	found=0;
	for(i=1;i<=n;++i)
		scanf("%s",s[i]);
	deal();
	if(found)//如果找到了公共字串 
	{
		for(i=1;i<=found;++i)//按顺序输出字串 
		{
			if(strcmp(ans[i],ans[i-1])!=0) printf("%s\n",ans[i]);//重复的字串不用输出	
		}
	}
	else printf("error\n");
	return 0;
}

