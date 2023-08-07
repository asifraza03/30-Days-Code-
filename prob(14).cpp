#include<iostream>
using namespace std;
bool isOdd(int num)
{
    if(num%2==0)
    {
        return false;
    }
    else{
        return true;
    }

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(isOdd(i)){
            cout<<i<< " ";
        }
    }
    return 0;

}
