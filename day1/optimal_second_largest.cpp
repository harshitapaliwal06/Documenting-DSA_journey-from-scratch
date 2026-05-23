#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        int largest = nums[0];
        int slargest = INT_MIN;
        for (int i=0;i<=n-1;i++){
             if(nums[i]>largest){
              
                slargest = largest ;
                largest = nums[i];
             }
            else if (nums[i]<largest && nums[i]>slargest){
                slargest = nums [i];
            }
            
             }
             
             return slargest;
        }

    };
    int main(){
    vector<int> nums = {3, 1, 7, 8, 9};
    Solution sol;
    cout << sol.secondLargestElement(nums) << endl;
    return 0;
}
