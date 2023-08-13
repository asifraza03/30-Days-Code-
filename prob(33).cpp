//rotate 2d matrices by 90 degree
#include<iostream>
#include <vector>
using namespace std;
void rotatevector( vector< vector < int> > &v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }       
    }
    //reverse
    for(int i = 0;i<n;i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    vector< vector < int> > v(n,vector< int  > (n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }

    }

    rotatevector(v);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;

    }
    return 0;
}
