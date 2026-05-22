#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    
    for(int i=0;i<n;i++) //ideally i=1
    { 
       int j=i;
        while(j>0 && arr[j] < arr[j-1])    {
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;

        j--;
    }

    }
}

int main()
{   int n = 6;
    int arr[6]={13,46,24,52,20,9};
    insertionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}