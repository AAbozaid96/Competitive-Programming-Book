#include<bits/stdc++.h>

using namespace std;

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
int dx[]={0,0,-1};
int dy[]={1,-1,0};
int n,m,st_x,st_y,en_x,en_y;
string S="IEHOVA";
char a[9][9];
vector<string>V;
bool f=0;
void solve(int x,int y,int ind)
{
    if(f)return ;
    if(a[x][y] =='#' && ind==7)
    {
        printf("%s",V[0].c_str());
        for(int i=1; i<V.size(); i++)
            printf(" %s",V[i].c_str());
        Line;
        f=1;
        return ;
    }

    if((a[x][y+1]==S[ind] || a[x][y+1] =='#') && y+1 <m){
        V.push_back("right");
        solve(x,y+1,ind+1);
    }
    else if((a[x][y-1]==S[ind] || a[x][y-1] =='#')&& y-1 >=0){
        V.push_back("left");
        solve(x,y-1,ind+1);
   }
    else if((a[x-1][y]==S[ind] || a[x-1][y] =='#') && x-1 >=0) {
        V.push_back("forth");
        solve(x-1,y,ind+1);
          }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif

    int t;
    SI1(t);
    while(t--)
    {
        f=0;
        V.clear();
        SI2(n,m);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf(" %c",&a[i][j]);
                if(a[i][j]=='@')st_x=i,st_y=j;
                if(a[i][j]=='#')en_x=i,en_y=j;
            }
        }
        solve(st_x,st_y,0);
    }
}
