#include<bits/stdc++.h>

using namespace std;
using namespace __gnu_cxx;

#define SI1(v)  scanf("%d",&v)					    // int 1
#define SI2(v1,v2)  scanf("%d%d",&v1,&v2)	     	// int 2
#define SI3(v1,v2,v3)  scanf("%d%d%d",&v1,&v2,&v3)  // int 3
#define SLL1(v)  scanf("%lld",&v)					// long long 1
#define SLL2(v1,v2)  scanf("%lld%lld",&v1,&v2)      // long long 2
#define PI1(v)  printf("%d\n",v)					    // int 1
#define PI2(v1,v2)  printf("%d %d\n",v1,v2)	     	// int 2
#define PLL1(v)  printf("%lld\n",v)					// long long 1
#define Line    printf("\n");
typedef long long ll;
int a[1002],n,t,mx=0;
vector<int>V,Res;
map<vector<int>,bool>M;
bool F=0;
void solve(int cur,int ind)
{

    if(cur<=t)
    {
      if(cur==t){
          mx=cur;
          Res=V;
        return ;
      }
    if(cur >=mx)
        {
            mx=cur;
            Res=V;
        }
    }
    for(int i=ind; i<n; i++)
    {
        if(cur+a[i] <=t)
        {
            V.push_back(a[i]);
            solve(cur+a[i],i+1);
            V.pop_back();
        }
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif

    while(SI2(t,n)!=-1)
    {
        mx=-1;
        Res.clear();
        for(int i=0; i<n; i++)SI1(a[i]);

        solve(0,0);
        for(int i=0; i<Res.size(); i++)
            printf("%d ",Res[i]);
        printf("sum:%d\n",mx);

    }

}


