//better approach for slargest 
//same for smallest cut will take INT_MAX  and conditions change 
#include<bits/stdc++.h>
using namespace std;
int slargest(vector<int>& nums){
     int largest= nums[0];
    int n= nums.size();
    for(int i=1;i<n;i++){
            if(largest<nums[i]){
                largest = nums[i];
            }
    }
    int slargest = INT_MIN;
   
    for(int i=0;i<n;i++){
        if(nums[i]!=largest && nums[i]>slargest){
            slargest=nums[i];
        }
        
    }
 if(slargest==INT_MIN){
        return -1;}
        return slargest;

    

}
int main(){
    int n;
    cout<<"enter number of elements"<<endl;
   
    cin>>n ;
    vector<int> nums;
    cout<<"enter ements"<<endl;
    for(int i=0;i<n;i++){
        
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int answer= slargest(nums);
    cout<<answer;

}