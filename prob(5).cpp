#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n,m,k;
    int count = 0;
    int count2 = 0;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            
        }
        
    }
    if(count == n)
    {
        cout<<"100"<<endl;
    }
    else{
        for(int i=0;i<n;i++)
        {

    if(arr[i]==1)
    {
        count2++;
        
    }
    else
    {
        break;
    }
        }
            if(count2>=m)
     cout<<k<<endl;
    else
     cout<<"0"<<endl;
}
        
        
        
    }
    


   return 0;
    
    
}
