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
int n,m;
string P;
vector<string>v,D;
string numbers[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
void func(int i)
{
    if (i==P.length())
    {
        for(int y=0;y<v.size();y++) cout<<v[y];
        puts("");
        return ;
    }
    if (P[i]=='#')
    {
        for(int w=0;w<n;w++)
        {
            v.push_back(D[w]);
            func(i+1);
            v.pop_back();
        } 
    }
    if (P[i]=='0')
    {
        for(int d=0;d<10;d++)
        {
            v.push_back(numbers[d]);
            func(i+1);
            v.pop_back();
        }
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif

    while(SI1(n)!=-1)
    {
        for(int i=0; i<n; i++)
            scanf("%s",word[i]);
        printf("--\n");
        SI1(m);
        for(int i=0; i<m; i++)
        {
            scanf("%s",rule);
            l=strlen(rule);
            solve("",0);

        }



    }

}


