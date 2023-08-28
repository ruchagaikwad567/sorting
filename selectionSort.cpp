#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&a)
{
    int n=a.size(); 
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(a[min],a[i]);
        }
    }
    
}

int main()
{
    vector<int>a={3,1,2,5,4};
    selectionSort(a);
    for(int i:a)
    {
        cout<<i<<" ";
    }

}