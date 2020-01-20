#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#define mod 1000000007
using namespace std;
int main()
{
    int t;
    t=1;
    while(t--)
    {
        int a,b,c,i,j,k;
       unsigned long long int ans=0;
       for(i=1;i<a;i++)
       for(j=1;j<=b;j++)
       {
       for(k=1;k<c;k++)
       {
           if(((j*j)-(k*i))<0)
           ans=(ans+1)%mod;
       }
         cout<<i<<" "<<j<<" "<<c<<" ";
        cout<<ans<<endl;
   }
    }
    return 0;
}
j=1;
for(i=1;i<=b;i++)
{
	f=0;
	for(;j<a && f!=1;j++)
	for(k=(i*i)/j-1;j<c;j++)
	if(((i*i)-(k*j))<0)
	{
	ans+=(a-j+1)*(c-k+1);
	break;
	f=1;
}
}
