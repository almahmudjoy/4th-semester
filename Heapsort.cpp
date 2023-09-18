#include<bits/stdc++.h>
#define ll  long long
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n)
{

    for (int i = n / 2 ; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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
    cin >> n;
    int arr[n];
    cout<<"Enter Unsorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting, the array is: ";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "After sorting, the array is: ";
    printArray(arr, n);

    Binary_Search(arr,n);

    return 0;
}
