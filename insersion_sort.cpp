#include<bits/stdc++.h>
using namespace std;
int insertion_sort(vector<int>v)
{
    int i,j,k;
    for(i=1;i<v.size();i++)
    {
        k=v[i];
        j=i-1;
        while(j>=0 && v[j]>k)
        {
            v[j+1]=v[j];
            j-=1;
        }
        v[j+1]=k;
    }
    for(int p=0;p<v.size();p++)
    {
        cout<<v[p]<<" ";
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
    insertion_sort(v);
}

