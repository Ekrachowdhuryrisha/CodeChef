#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n, s=2;
        cin>>n;
        if(n==1 || n==3)
        {
            cout<<1<<endl;
        }
        if(n%2==0)
        {
            for(int i =2; i <=n; i++)
            {
               // cout<<i<<" ";
                if(i==n )
                {
                    cout<<s<<endl;
                    break;
                }
                else
                {
                    s++;
                }
                i++;
            }
        }
        else
        {
            for(int i=5; i<=n; i++)
            {
                //cout<<i<<" ";
                if(i==n )
                {
                   cout<<s<<endl;
                    break;
                }
                else
                {
                    s++;
                }
                i++;
            }
        }
    }
    return 0;
}
