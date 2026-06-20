#include<iostream>
#include<vector>
using namespace std;

int lb(vector<int> & nums,int x,int n){
int low = 0;int high = n-1;
int ans = n;
while(low<=high){
int mid = low+(high-low)/2;

if (nums[mid]>= x){
ans = mid;
high = mid-1;}
else low = mid+1;}
return ans;
}
int main()
{
vector<int> arr = {1,1,2,3,4,6,7,8};
int n= 8;
cout<< lb(arr,4,8);


    return 0 ;
}