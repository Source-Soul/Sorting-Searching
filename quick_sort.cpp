#include<bits/stdc++.h>
using namespace std;

int Partition(int low,int hi)
{
    vector<int>A;
    int pivot=A[low];
    int i=low;
    int j=hi;
    while(i<j)
    {
        while(A[i]<=pivot)
        {
            i+=1;
        }
        if(i<j)
        {
            swap(A[i],A[j]);
        }
    }
    swap(A[low],A[j]);
    return j;
}

void quick_sort(int low,int hi)
{
    if(low<hi)
    {
        int p=Partition(low,hi);
        quick_sort(low,p-1);
        quick_sort(p+1,hi);
    }
}

int main()
{
     vector<int>v;
    int n;
    cin>>n;
    int x;
    for(int q=0;q<n;q++)
    {

        cin>>x;
        v.push_back(x);
    }
   int low,hi;
   cin>>low>>hi;
    vector<int>A;
    quick_sort(low,hi);
     for(int p=0;p<(low+hi);p++)
    {
        cout<<A[p]<<" ";
    }
}

