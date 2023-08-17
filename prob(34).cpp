
// CodeChef Problem - https://www.codechef.com/problems/FACEBOOK?tab=submissions

#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        int max_b = -1;
        int index = -1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int max_a = *max_element(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i] == max_a && b[i] > max_b)
            {
                max_b = b[i];
                index = i + 1;

            }
            
        }
        cout<<index<<endl;

    }
    return 0;
}
