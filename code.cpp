#include<stdio.h>
#include<algorithm>

using namespace std;

const int maxi=1e6+5;

int cnt[maxi],b[maxi];
int p,q,ans,n,t,tmp,xs,m;

void solve()
{
  scanf("%d",&n);

   xs=0;
  for (int i=0;i<n;i++)
   {
       scanf("%d",&p);
       xs=xs^cnt[p];
    }

    if (xs==0) printf("2\n"); else printf("1\n");
}

void sito()
{
    cnt[1]=0;

    for (int i=2;i<maxi;i++)
    {
        if (b[i]==0)
        {
          for (int j=i;j<maxi;j+=i)
          {
              m=j;
              b[j]=1;
              while (m%i==0)
              {
                cnt[j]++;
                m=m/i;
              }

          }
        }
    }
}

int main()
{
    scanf("%d",&t);

    sito();

    while (t--)
       solve();

  return 0;
}