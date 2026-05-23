#include<bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
            int n = nums.size();
			for(int i=1;i<n;i++)
            {
                if(nums[i]>=nums[i-1])
                {
                    
                }
                else{
                    return false;
                }
            }
            return true ;
		}
};
int main(){
    vector<int> nums = {3, 6, 7, 8, 9};
    Solution sol;
    cout << sol.isSorted(nums) << endl;
    return 0;
}