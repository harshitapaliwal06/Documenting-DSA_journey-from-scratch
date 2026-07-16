#include<bits/stdc++.h>
                          // header files have no effect on runtime and memory but can just increase compiltion time 
using namespace std ;
int smallest(vector<int>& nums)// if i dont use & will create a photocopy also so pass by ref used 
{
    int min= nums[0];
    int n=nums.size();
    for(int i =0; i<n ; i++ ){
        if(min>nums[i]){
             min=nums[i];
        }

    }
    return min; //just stores min 
}
int main(){
    vector<int> nums ={ 10,30,50,70};
    int answer = smallest(nums);
    cout<<answer;

}

