#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int om[n];
        int addy[n];
        int countom=0;
        int countaddy=0;
        int ansom=INT_MIN;
        int ansaddy=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>om[i];
            if(om[i]!=0)
            {
                countom++;
                ansom=max(ansom,countom);
                
            }
            else{
                countom=0;
            }
            
        }
        for(int i=0;i<n;i++)
        {
            cin>>addy[i];
            if(addy[i]!=0)
            {
                countaddy++;
                ansaddy=max(ansaddy,countaddy);
                
            }
            else{
                countaddy=0;
            }
            
        }
        if(ansom>ansaddy){
            cout<<"om"<<endl;
        }
        else if(ansaddy>ansom)
        {
            cout<<"Addy"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
        
        
    }
    return 0;
}
