#include<iostream>
#include<vector>
using namespace std;
int findpindex(vector<int> &arr,int high,int low)
{   int i=low;
    int j=high;
    int p=low;
    while(i<j)
    {
    while(arr[i]<=arr[p] && i<high){
    i++;
    }
    while(arr[j]>arr[p] && j>low)
    {
        j--;
    }
    if(i<j)
    {
        swap(arr[low],arr[j]);
    }
}
    return j;
}
void quicksort(vector<int> &arr, int high,int low)

{ if(low<high)
   { int p = findpindex(arr,high,low);
  quicksort(arr,p-1,low);
  quicksort(arr,high,p+1);
   }
}
int main(){
    int n=9;
    int high=n-1;
    int low=0;
    vector<int> arr={4,6,2,5,7,9,1,3};
    quicksort(arr,high,low);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}