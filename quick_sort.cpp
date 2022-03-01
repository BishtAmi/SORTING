/*
   sorting functions
    2.Quick sort
*/
#include<iostream>
using namespace std;
int Partition(int *a,int start, int End)// function partition array into 2 halfs (where all elements are less than a element and others are greater)
{
   int value=a[End];
   int pindex=start;
   for(int i=start;i<End;i++)
   {
       if(a[i]<=value)
         {
             swap(a[i],a[pindex]);// swap if end element value less than current element
             pindex++;
         }
   }
   swap(a[End],a[pindex]);
   return pindex;
}
void Quick_sort(int *a, int start, int End)
{
    if(start<End)
    {
        int pindex=Partition(a,start,End);
        Quick_sort(a,start,pindex-1);// partition till a single element found
        Quick_sort(a,pindex+1,End);
    }
}
int main()
{   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
