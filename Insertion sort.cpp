/*
   sorting functions
    2.Insertion sort
*/
#include<iostream>
using namespace std;
void Insertion_sort(int a[],int n)
{
    int value,pos;
    for(int i=1;i<n;i++)
    {
        value=a[i];// store current value of element
        pos=i; // position of current element
        while(pos>0&&a[pos-1]>value)
        {
            a[pos]=a[pos-1];// shiftting elements till the given set(0->pos) not sorted
            pos-=1;
        }
        a[pos]=value;// put element in right location
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
    Insertion_sort(arr,n);// call Insertion  sort function
}
