#include<bits/stdc++.h>
using namespace std;

void selection( int arr[], int n)
{
    for (int i=0; i<n-1; i++){
        int mini=i;
        for (int j=i+1; j<n; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(mini!=i){
         int temp= arr[i];
         arr[i]= arr[mini];
         arr[mini]= temp;
        }
    }
}

int main()
{
    cout<<"                  Selection Sort "<<"\n\n";
    int n;
    cout<<"How many numbers     : ";
    cout.flush();
    cin>>n;
    cout<<"\n";

    int arr[n];
    cout<<"Enter Unsorted array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
 cout<<"\n";
    selection(arr, n);

    cout<<"Sorted array         : ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n\n";
    return 0;
}
