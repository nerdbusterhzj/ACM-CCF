#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	srand(time(0));
	int n;cin>>n;
	for (int i=1;i<=n;i++)
	{
		int lucky=rand()%56;
		while (lucky==0) lucky=(lucky+rand())%56;
		cout<<lucky<<endl;
	}
	return 0;
}
