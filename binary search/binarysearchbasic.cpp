#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int>& nums,int target,int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {   int mid = low + (high-low)/2;
        if (nums[mid] == target)
        return mid;
        else if (nums[mid] < target)
        low = mid+1;
        else high = mid-1;
    }
    return -1;
}int main(){
int n = 5;
vector<int> aaa = {1,3,4,5,6};
cout << bs(aaa , 5,5);
return 0;
}