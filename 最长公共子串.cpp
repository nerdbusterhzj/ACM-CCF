#include <stdio.h>
#include <string.h>
char s[101][101],ans[101][101];
int n,i,j,k,found;
void sort()//�Ӵ����� 
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
	int len=strlen(s[1]);//��һ���ַ����ĳ��� 
	for(k=len;k>=1;--k)//�����һ���ַ���ʼ 
	{
		for(i=0;i<=len-k;++i)
		{
			char temp[101]={0};
			int l=0;
			for(j=i;j<i+k;++j)//��������һ���ַ����е������ִ���ȡ���� 
			{
				temp[l++]=s[1][j];
			} 
			temp[l]='\0';//���� 
			for(j=2;j<=n;++j)//�������ַ����ȶ��ִ� 
			{
				if(strstr(s[j],temp)==NULL) break;//û�бȶԵ��ͻ���һ���ִ� 
			}
			if(j==n+1)//ÿһ���ַ������ȶԵ�������ִ� 
				strcpy(ans[++found],temp);//������ִ����� 
		}
		if(found) break;//����������˾ͽ���ѭ����found���ҵ��Ĺ����ִ������� 
	}
	sort();//���ִ��������� 
}
int main()
{
	scanf("%d",&n);
	found=0;
	for(i=1;i<=n;++i)
		scanf("%s",s[i]);
	deal();
	if(found)//����ҵ��˹����ִ� 
	{
		for(i=1;i<=found;++i)//��˳������ִ� 
		{
			if(strcmp(ans[i],ans[i-1])!=0) printf("%s\n",ans[i]);//�ظ����ִ��������	
		}
	}
	else printf("error\n");
	return 0;
}

