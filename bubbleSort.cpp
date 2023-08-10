#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swapped=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!swapped)
        {
            break;
        }

    }
}

int main()
{
    vector<int>arr={9,3,2,6,5,1};
    bubble(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}