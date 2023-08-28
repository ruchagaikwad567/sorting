#include<bits/stdc++.h>
using namespace std;

//DIVIDE AND MERGE ALGORITHM

//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
        int temp[r];
        int left=l;
        int right=mid+1;
        int k=0;
        while(left<=mid && right<=r)
        {
            if(arr[left]<=arr[right])
            {
                temp[k]=arr[left];
                left++;
                k++;
            }
            else
            {
                temp[k]=arr[right];
                right++;
                k++;
            }
        }
        while(left<=mid)
        {
            temp[k]=arr[left];
            left++;
            k++;
        }
        while(right<=r)
        {
            temp[k]=arr[right];
            right++;
            k++;
        }
        for(int i=l;i<=r;i++)
        {
            arr[i]=temp[i-l];
        }
         // Your code here
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
        {
            return ;
        }
        
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
        //code here
    }
};


int main()
{
    Solution obj;
    int arr[]={3,2,5,4,1};
    obj.mergeSort(arr,0,4);

    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}