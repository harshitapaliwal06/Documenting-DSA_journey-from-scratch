#include<bits/stdc++.h>
using namespace std ;
int linearSearch(int *arr, int n, int x)
{
    for ( int i=0;i<=n-1;i++){
        if(arr[i]==x){
            return i;
        }
        
    }
    return -1 ;
}
int main(){
    int arr[] = { 1,3,5,9,6};
    int ans = linearSearch(arr,5,2);
    cout << ans ;
}