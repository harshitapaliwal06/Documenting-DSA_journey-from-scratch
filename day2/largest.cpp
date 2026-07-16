#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>& nums){
    int largest= nums[0];
    int n= nums.size();
    for(int i=1;i<n;i++){
            if(largest<nums[i]){
                largest = nums[i];
            }
    }
    return largest ;
}
int main(){
    vector<int> nums ;
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x ;
        cin>>x;

    nums.push_back(x);}
   int ans= largest(nums);
    cout<<ans;
    }
