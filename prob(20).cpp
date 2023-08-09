#include<iostream>
using namespace std;
int secondLargest(int array[],int size)
{
    int max=INT_MIN;
    int secmax=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if( array[i]>secmax && array[i]!=max)
        {
            secmax = array[i];
        }
    }
    return secmax;
}
int main()
{
    int arr[]={12,11,12,12,11,5,6};
    cout<<secondLargest(arr,7);
    return 0;

}



// #include<iostream>
// using namespace std;
// int index(int array[],int size)
// {
//     int max=INT_MIN;
//     int count = 0;
//     for(int i=0;i<size;i++)
//     {
//         if(array[i]> max)
//         {
//             max=array[i];
//             count=i;
//         }

//     }
//     return count;
// }
// int main()
// {
//     int arr[]={1,56,23,77,42,19,5,17};
//     int first = index(arr,8);
//     arr[first] = -1;
//     int second = index(arr,8);
//     cout<<arr[second]<<endl;
//     return 0;

// }
