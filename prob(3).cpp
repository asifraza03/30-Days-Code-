#include<iostream>

#include<string>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        int w[n],h[n],p[n];
        for(int i=0;i<n;i++)
        {
            cin>>w[i]>>h[i]>>p[i];
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(p[i]<=b)
            {
                if(w[i]*h[i]>=max)
                {
                    max=w[i]*h[i];
                }
            }
        }
        if(max==0)
        {
            cout<<"no tablet"<<endl;
        }
        else{
            cout<<max<<endl;
        }
    }
    return 0;
}
