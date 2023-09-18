#include<bits/stdc++.h>
#define ll  long long
using namespace std;

//const int mx=1e8+123;
//int a[mx];
void insertion(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<"How many Element : ";
    int n;
    cin>>n;
    cout<<"Unsorted Array : ";
    int arr[n];

    for(int i=0; i<n; i++)
    {

        cin>>arr[i];
    }

    insertion(arr,n);
    cout<<endl;
    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



}

