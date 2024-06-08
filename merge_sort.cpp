#include<bits/stdc++.h>
using namespace std;

int MERGE(int low,int mid,int hi)
{
    int m=mid-low+1;
    int n=hi-mid;
    vector<int>l;
    vector<int>r;
    vector<int>A;
    for(int i=0;i<=m-1;i++)
    {
        l[i]=A[low+i];
    }
    for(int j=0;j<=n-1;j++)
    {
        r[j]=A[mid+1+j];
    }

    l[m]=999999999999;
    r[n]=999999999999;
    int i=0,j=0;

    for(int k=0;k<=(low+hi);k++)
    {
        if(l[i]<=r[j])
        {
            A[k]=l[i];
            i+=1;
        }
        else{
            A[k]=r[j];
            j+=1;
        }
    }
    //vector<int>A;
}

int merge_sort(int low,int hi)
{
    if(low<hi)
    {
        int mid=(low+hi)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,hi);
        int m= MERGE(low,mid,hi);
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
    merge_sort(low,hi);
     for(int p=0;p<(low+hi);p++)
    {
        cout<<A[p]<<" ";
    }
}
