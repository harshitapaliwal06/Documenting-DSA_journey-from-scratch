//rotating by one element 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums) {
        int temp = nums[0];
        for (int i=0;i<=nums.size()-1;i++){
            nums[i-1]=nums[i];

        }
        nums[nums.size()-1]=temp;

    }
};
int main(){

    vector<int> nums = {3,1,7,2,9};

    Solution sol;

    sol.rotate(nums);

    for(int i=0; i<nums.size(); i++) {

        cout << nums[i] << " ";
    }

    return 0;
}