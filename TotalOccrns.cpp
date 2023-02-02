#include<iostream>
using namespace std;
int TotalOcrns(int arr[],int n,int key)
{
    int count = 0;
    int ans;
    int s =0;
    int e = n-1;
    int mid = (s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
          ans = mid;
          e = mid-1;
        
        }
        else if(key>arr[mid])
        {
            s = mid+1;
        }
        else if(key<arr[mid])
        {
            e = mid-1;
        }
        mid = (s+e)/2;
    }
        for(int i = ans;i<=n-1;i++)
        {
        if(arr[i] ==key)
        {
            count++;
        }
        }
    
    return count;
}
int main()
{
    int arr[10] = {1,1,2,3,3,3,3,5,5,7};
    int count;
    count = TotalOcrns(arr,10,1);
    cout<<"total no of occurrence of "<<" 1-is "<<count;
    return 0;
}