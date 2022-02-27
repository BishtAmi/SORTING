/*
   sorting functions
    2.Bubble sort
*/
#include<iostream>
using namespace std;
void Bubble_sort(int a[],int n)
{
    for(int i=0;i<n;i++)//N passes
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
               swap(a[j],a[j+1]);//highest element among the array comes to last in each pass
        }
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
        cin>>arr[i];//input the array elements
    }
    Bubble_sort(arr,n);// call selection sort function
}
