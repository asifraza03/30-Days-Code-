//identifying unique element in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,1,3,2,4,1};
    int size=7;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                arr[i] = -1;
                arr[j] = -1;
            }
        }

    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=-1){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
