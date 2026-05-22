#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    
    for(int i=n-1;i>0;i--)
    {
        int didswap=0;
        for(int j=0;j<i;j++)
        {
            if(arr[j+1]<arr[j]){
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;}
        didswap = 1;
        }
        if (didswap==0){
        break;}        

    }
}

int main()
{   int n = 6;
    int arr[6]={13,46,24,52,20,9};
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}