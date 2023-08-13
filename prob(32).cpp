
//Problem(32) - Find the index of maximum ones present in raw.

#include <iostream>
#include <vector>
using namespace std;

int rawnum(vector< vector <int > > &v)
{
    int maxone = INT_MIN;
    int col = v[0].size();
    int temp=0;
    int chidya=-1;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j] == 1)
            {
                temp = col - j;
                if( temp > maxone )
                {
                    maxone = temp;
                    chidya = i;
                }
                break;
            }

        }
    }
    return chidya;
}
 

int main()
{
    int n,m;
    cin>>n>>m;
    vector< vector<int> >v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }

    int dhoom = rawnum(v);
    cout<<dhoom<<endl;
    return 0;

}
