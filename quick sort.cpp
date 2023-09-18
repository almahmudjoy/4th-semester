#include <iostream>
using namespace std;


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
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

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements          : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original Array              : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array                : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    Binary_Search(arr,n);
    return 0;
}

