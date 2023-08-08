#include<iostream>
using namespace std;
int index(int array[],int size)
{
    int max=INT_MIN;
    int count = 0;
    for(int i=0;i<size;i++)
    {
        if(array[i]> max)
        {
            max=array[i];
            count=i;
        }

    }
    return count;
}
int main()
{
    int arr[]={1,56,23,77,42,19,5,17};
    int first = index(arr,8);
    arr[first] = -1;
    int second = index(arr,8);
    cout<<arr[second]<<endl;
    return 0;

}
