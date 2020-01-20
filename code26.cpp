#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        map<char,int> temp;
        temp['c']=0;
        temp['d']=0;
        temp['o']=0;
        temp['e']=0;
        temp['h']=0;
        temp['f']=0;
        while(n--)
        {
            char str[1001];
            int i;
            scanf("%s",str);
            for(i=0;str[i]!='\0';i++)
            temp[str[i]]++;
        }
        vector<int> ans;
        ans.push_back(temp['c']);
        ans.push_back(temp['o']);
        ans.push_back(temp['d']);
        ans.push_back(temp['e']);
        ans.push_back(temp['h']);
        ans.push_back(temp['f']);
        sort(ans.begin(),ans.end());
        if(ans[0]==temp['c']|| ans[0]==temp['e'])
        printf("%d\n",ans[0]/2);
        else
        printf("%d\n",ans[0]);
    }
    return 0;
}
