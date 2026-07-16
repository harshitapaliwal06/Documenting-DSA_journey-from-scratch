#include<bits/stdc++.h>
using namespace std;
int slargest(vector<int>& nums){
    int max=nums[0];
    int smax =INT_MIN;
    int n= nums.size();
    for(int i =1 ; i<n ;i++){
        if(nums[i]>max){
            smax=max;
            max =nums[i];}
        else if(nums[i]<max && nums[i]>smax){
            smax=nums[i];
        }

        
    }
    if(smax == INT_MIN)
{
    return -1;
}

return smax;
    return smax;

}
int main(){
    vector<int> nums ={10,20,30,50,60,60};

    int ans = slargest(nums);
    cout<<ans<<endl;

    vector<int> nums1 ={60,60,60};

    int ans1 = slargest(nums1);
    cout<<ans1;
}