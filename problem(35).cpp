// CODECHEF PROBLEM - https://www.codechef.com/problems/EQCARDGAME


#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int c = 52;
        int d  = c/k;
        int e = c - (d*k);
        cout<<e<<endl;
        
    }
    return 0;
}
