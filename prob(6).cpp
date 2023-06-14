#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n]={0};
        int b[n]={0};
        int count=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]==(i+1))
            {
                b[a[i]-1]=-1;
                continue;
            }
            else{
                if(b[a[i]-1]!=-1)
                {
                    b[a[i]-1]++;
                }
                
            }
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]>=k)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;

}
