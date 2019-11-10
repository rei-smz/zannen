#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include <cstring>
#include <climits>
using namespace std;
int fuck(int n,int x1,int x2,int x3,int x4,int x5,int sum)
{
    int f;
    int bsum;
    bsum=sum;
    if(n==5)
    {
        if(sum==24)
            return 1;
        else if(sum+x5==24)
            return 1;
        else if(sum-x5==24)
            return 1;
        else
            return 0;
    }
    else
    {
        f=fuck(n+1,x1,x2,x3,x4,x5,sum);
        if(f)
            return 1;
        if(n==1)
        {
            f=fuck(n+1,x1,x2,x3,x4,x5,sum+x1);
            if(f)
                return 1;
            f=fuck(n+1,x1,x2,x3,x4,x5,sum-x1);
            if(f)
                return 1;
            return 0;
        }
        if(n==2)
        {
            f=fuck(n+1,x1,x2,x3,x4,x5,sum+x2);
            if(f)
                return 1;
            f=fuck(n+1,x1,x2,x3,x4,x5,sum-x2);
            if(f)
                return 1;
            return 0;
        }
        if(n==3)
        {
            f=fuck(n+1,x1,x2,x3,x4,x5,sum+x3);
            if(f)
                return 1;
            f=fuck(n+1,x1,x2,x3,x4,x5,sum-x3);
            if(f)
                return 1;
            return 0;
        }
        if(n==4)
        {
            f=fuck(n+1,x1,x2,x3,x4,x5,sum+x4);
            if(f)
                return 1;
            f=fuck(n+1,x1,x2,x3,x4,x5,sum-x4);
            if(f)
                return 1;
            return 0;
        }
    }
}
int main()
{
    int t;
    int x1,x2,x3,x4,x5,f;
    cin>>t;
    int i,j,k,l,m,n;
    for(i=0;i<t;i++)
    {
        f=0;
        cin>>x1>>x2>>x3>>x4>>x5;
        f=fuck(1,x1,x2,x3,x4,x5,0);
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
