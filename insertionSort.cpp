#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&a)
{
    for(int i=1;i<a.size();i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;
    }
}

int main()
{
    vector<int>a={3,4,2,5,1};
    insertionSort(a);
    for(int i:a)
    {
        cout<<i<<" ";
    }
}