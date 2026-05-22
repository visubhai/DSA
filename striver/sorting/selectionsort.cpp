#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            mini = j;
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;

    }
}

int main()
{   int n = 6;
    int arr[6]={13,46,24,52,20,9};
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}