/* Given an array of integers nums, return the value of the largest element in the array*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums) {
      int n = nums.size();
      int largest = nums[0];
      for(int i=0;i<=n-1;i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
      }
      return largest;
    }
};
int main(){
    vector<int> nums = {3, 1, 7, 2, 9};
    Solution sol;
    cout << sol.largestElement(nums) << endl;
    return 0;
}