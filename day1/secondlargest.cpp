//Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        int largest = nums[0];
        for(int i=0;i<=n-1;i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
      }
       int slargest=INT_MIN;
       for(int i=0;i<=n-1;i++){
        if(nums[i]>slargest && nums[i]!=largest){
            slargest = nums[i];
        }
       }
       if(slargest==INT_MIN){
        return -1;
       }
       return slargest;
      
    }

};
int main(){
    vector<int> nums = {3, -8, 9, 2, 9};
    Solution sol;
    cout << sol.secondLargestElement(nums) << endl;
    return 0;
}