#include<bits/stdc++.h>
using namespace std ;
bool checksorted(vector<int>& nums){
   int  n = nums.size();
   for (int i=1;i<n;i++){
       if(nums[i-1]>nums[i]){
        return false ; 
       }
   }
   return true ;
}
int main(){
    vector<int> nums ={10,30,50,60};
    vector<int> nums1={67,80,30};

    cout<<checksorted(nums)<<endl;
    cout<<checksorted(nums1)<<endl;
}