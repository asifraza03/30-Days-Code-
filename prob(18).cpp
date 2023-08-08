#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,4,5,7,5,3};
    int target;
    cin>>target;
    int size=6;
    int pair = 0;
    for(int i=0;i<=size;i++)
    {
        for(int j=i+1;j<=size;j++)
        {
            if(arr[i]+arr[j] == target)
            {
                pair++;
            }

        }
    }
    cout<<pair<<endl;
    return 0;
}
