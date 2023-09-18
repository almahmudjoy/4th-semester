#include<bits/stdc++.h>
#define ll  long long
using namespace std;


void merges(int arr[], int l, int mid, int h)
{
    int i=l;
    int j=mid+1;
    int k=l;
    int temp[h + 1];
    while(i<=mid && j<=h)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=h)
        {
            temp[k]=arr[j];
            j++;
            k++;
        }

    }
    else
    {
        while(i<=mid)
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
    }


    for(k=l; k<=h; k++)
    {
        arr[k]=temp[k];
    }

}

void mergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);
        merges(arr, l, mid, h);
    }
}

void Binary_Search(int arr[],int n)
{
    cout<<endl;
    cout<<"Enter the value you want to search : ";
    int item;
    cin>>item;
    int beg=1;
    int End=n;
    int mid=(End+beg)/2;
    while(beg<=End && arr[mid]!=item)
    {
        if(item<arr[mid])
        {
            End=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=(End+beg)/2;
    }
    cout<<"Value Position : "<<mid<<endl;
}


int main()
{
    cout<<"How many numbers     : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Unsorted Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr, 0, n - 1);

    cout<<"Sorted Array         : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Binary_Search(arr,n);



}

