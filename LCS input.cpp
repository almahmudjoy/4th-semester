#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) {return (a>b) ? a: b;}

int knapSack(int c, int wt[], int val[], int n)
{
    int k[n+1][c+1];
    for(int i=0 ; i<=n; i++)
    {
        for(int w=0; w<=c; w++)
        {
            if(i==0 || w==0)
            {
                k[i][w]=0;
            }
            else if(wt[i-1]<=w)
            {
                k[i][w]=max(val[i-1] + k[i-1][w-wt[i-1]], k[i-1][w]);
            }
            else
                k[i][w]=k[i-1][w];
        }
    }
    return k[n][c];
}


int main()
{
    int n;
    cout<<"Enter number of element : ";
    cin>>n;

    int p[n],w[n];
    cout<<"Enter profit of knapsack : ";
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    cout<<"Enter weight of knapsack : ";
    for(int i=0; i<n; i++)
    {
        cin>>w[i];
    }

    int c;
    cout<<"Enter capacity of knapsack : ";
    cin>>c;

    cout<<"Maximum value put in the knapsack : "<<knapSack(c,w,p,n);
}
