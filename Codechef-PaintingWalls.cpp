#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,x,y,z, area, cost, Max_wall;
    cin>>test;
    while(test-->0)
    {
        cin>>x>>y>>z;
        area=x*y;
        cost=area*2;
        Max_wall=z/cost;
        cout<<Max_wall<<endl;
    }
    return 0;
}



