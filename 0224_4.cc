//problem: https://atcoder.jp/contests/abc119/tasks/abc119_c
//this source code is mostly from https://atcoder.jp/contests/abc119/submissions/4375431
//
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
int n,m,q;
long long ans;
long long a[100000+10],b[100000+10];
int main()
{
	scanf("%d%d%d",&n,&m,&q);
	for(int i=1;i<=n;i++) {scanf("%lld",&a[i])};

	n++;
  //全部について同じアルゴリズムが使えるように、最初と最後を追加している
  a[n]=1e18;
  a[0]=-1e18;
	for(int i=1;i<=m;i++) {scanf("%lld",&b[i])};

	m++;
  b[m]=1e18;
  b[0]=-1e18;

	for(int i=1;i<=q;i++){
		long long x;
		scanf("%lld",&x);
    //lower_bound does binary search; O(logn)
		int k1=lower_bound(a+1,a+n+1,x)-a;
		int k2=lower_bound(b+1,b+m+1,x)-b;
		ans=min(min(a[k1]-b[k2-1]+min(a[k1]-x,x-b[k2-1]),b[k2]-a[k1-1]+min(b[k2]-x,x-a[k1-1])),
				min(x-min(a[k1-1],b[k2-1]),max(a[k1],b[k2])-x));
		printf("%lld\n",ans);
	}
	return 0;
}
