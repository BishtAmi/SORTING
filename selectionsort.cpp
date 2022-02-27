/*
   sorting functions
    1.selection sort
*/
#include<iostream>
using namespace std;
void selection(int a[],int n)//selection sort which takes a input array and a integer
{ int Min;
    for(int i=0;i<n-1;i++)
    {
         Min=i;//store random index and assume to be Minimum value index
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[Min])// traverse the whole array and check the min. value in the array
                Min=j; // update the Min index
        }
       swap(a[i],a[Min]);// swap the ith index to min. index
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";//output the sorted array
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);// call selection sort function
}
