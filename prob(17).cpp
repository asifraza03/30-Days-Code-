#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<=n;i++)
    {
        if(i%2 == 0)
        {
            count+=arr[i];

        }
        else{
            count-=arr[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
