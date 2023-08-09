#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v = {1,2,3,7,18,15,14};
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(7);
    // v.push_back(18);
    // v.push_back(15);
    // v.push_back(14);
    int k=5;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());



    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,7,18,15,14};
//     int emptyarr[7];
//     int n=7;
//     int k=5;
//     k=k%n;
//     int j=0;

//     //{3,7,18,15,14}
//     for(int i=n-k;i<n;i++)
//     {
//         emptyarr[j++]=arr[i];
//     }
//     //{1,2,3}
//     for(int i=0;i<=k;i++)
//     {
//         emptyarr[j++]=arr[i];
//     }
//     //{3,7,18,15,14,1,2,3}
//     for(int i=0;i<=n;i++)
//     {
//         cout<<emptyarr[i]<<" ";
//     }
//     return 0;

// }
