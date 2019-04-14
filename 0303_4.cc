//https://atcoder.jp/contests/abc120/tasks/abc120_d
//Reference: https://atcoder.jp/contests/abc120/submissions/4456957
#include<bits/stdc++.h>
#define int  long long
using namespace std;
int n,m,ans[100010],x[100010],y[100010],f[100010],num[100010];
int find(int x)
{
	if(f[x]==x)
		return x;
	return f[x]=find(f[x]);
}
signed main()
{
	scanf("%lld%lld",&n,&m);
	for(register int i=1;i<=m;i++)
		scanf("%lld%lld",&x[i],&y[i]);
	ans[m]=n*(n-1)/2;
	for(register int i=1;i<=n;i++)
	{
		f[i]=i;
		num[i]=1;
	}
	for(register int i=m;i>=1;i--)
	{
		int u=find(x[i]),v=find(y[i]);
		ans[i-1]=ans[i];
		if(u!=v)
		{
			f[u]=v;
			ans[i-1]-=num[u]*num[v];
			num[v]+=num[u];
		}
	}
	for(register int i=1;i<=m;i++)
		printf("%lld\n",ans[i]);
	return 0;
}
