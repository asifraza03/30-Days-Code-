#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int sum=a+b;
	    int temp=0;
	    int count=0;
	    int arr[10]={6,2,5,5,4,5,6,3,7,6};
	    for(int i=0;i<=9;i++)
	    {
	        while(sum>0)
	        {
	            temp=sum%10;
	            count+=arr[temp];
	            sum=sum/10;
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
