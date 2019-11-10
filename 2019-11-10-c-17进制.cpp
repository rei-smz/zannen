#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include <cstring>
#include <climits>
using namespace std;
int main()
{
    char c;
    int res=0;
    scanf("%c",&c);
    while (c!='\n')
    {
        res=17*res+c-'a';
        scanf("%c",&c);
    }
    cout<<res;
    return 0;
}