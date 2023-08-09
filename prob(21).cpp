#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,7,18,15,14};
    int emptyarr[7];
    int n=7;
    int k=5;
    k=k%n;
    int j=0;

    //{3,7,18,15,14}
    for(int i=n-k;i<n;i++)
    {
        emptyarr[j++]=arr[i];
    }
    //{1,2,3}
    for(int i=0;i<=k;i++)
    {
        emptyarr[j++]=arr[i];
    }
    //{3,7,18,15,14,1,2,3}
    for(int i=0;i<=n;i++)
    {
        cout<<emptyarr[i]<<" ";
    }
    return 0;

}
