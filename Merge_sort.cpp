
/*
   sorting functions
    2.Merge sort
*/
#include<iostream>
using namespace std;
void Merge(int l[],int r[],int a[],int l1,int r1)//Merge  segments
{
    int i=0,j=0,k=0;
    while(i<l1&&j<r1)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i]; i++; k++;
        }
        else
        {
            a[k]=r[j]; k++; j++;
        }
    }
    while(i<l1)
    {
        a[k]=l[i]; k++; i++;
    }
    while(j<r1)
    {
        a[k]=r[j]; k++; j++;
    }

}
void Merge_sort(int a[], int n)
{
    int mid,*l,*r;
    mid=n/2;
    if(n<2)
      return;
    l = (int*)malloc(mid*sizeof(int)); // allocate memory for l[] array
	r = (int*)malloc((n- mid)*sizeof(int));// allocate memory for r[] array
	for(int i=0;i<mid;i++)
    {
        l[i]=a[i];
    }
    for(int i=mid;i<n;i++)
    {
        r[i-mid]=a[i];
    }
    Merge_sort(l,mid);// divide segments till single elments
    Merge_sort(r,n-mid);
    Merge(l,r,a,mid,n-mid);// Merge the segments of left half and right half
    free(l);// free memory
    free(r);
}
int main()
{   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Merge_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
