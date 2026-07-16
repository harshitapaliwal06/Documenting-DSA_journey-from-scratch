#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>& nums, int target){
    int n= nums.size();
   for (int i=0;i<n;i++){
    if(nums[i]==target){
        return i;
    }
   }
   return -1;//so that returns -1 if not found
}
int main(){
 vector<int> nums ;
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x ;
        cin>>x;

    nums.push_back(x);}
    int target ;
    cin>>target;
    int ans = linearSearch(nums,target);
    cout<<ans;

}