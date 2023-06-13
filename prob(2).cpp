#include <iostream>
using namespace std;


void solution()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
            cout<<"1";
        }
        else{
            cout<<"0";
        }
        
    }
    cout<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    solution();
	}
	return 0;
}
