//Problem(26) - Return Prefix Sum/Running in same list using vector;

#include <iostream>
#include <vector>
using namespace std;
void dhoom(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i+1])
        {
            v[i+1]=v[i]+v[i+1];
        }
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    vector <int>v;
    for(int i=0;i<n;i++)
    {
        int elem;
        cin>>elem;
        v.push_back(elem);
    }

    dhoom(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}
