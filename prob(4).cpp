#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]>count)
            {
                count=m[arr[i]];
            }
            
        }
        cout<<n-count<<endl;
    }
    return 0;
}
