#include<bits/stdc++.h>
using namespace std;

//pick a pivot ele and place it in its correct place
//DIVIDE & CONQUER ALGORITHM
int partition(vector<int>&arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
            
            cout<<arr[i]<<" and "<<arr[j]<<" swappeda "<<endl;

        }
    }
    swap(arr[low],arr[j]);
    cout<<arr[low]<<" and "<<arr[j]<<" swapped "<<endl;
            return j;

}

void quickSort(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);

    }
}

int main()
{
    vector<int>arr={3,5,4,2,1,7};
    quickSort(arr,0,arr.size()-1);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}