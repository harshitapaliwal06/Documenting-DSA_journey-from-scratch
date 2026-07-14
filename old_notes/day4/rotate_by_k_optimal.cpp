#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n,int k){
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n ;
    cout<<"enter n";
    cin>>n;
    int arr [n];
    cout << "enter values "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];

    }
    int k;
    cout<<"enter k"<<endl ;
    cin>>k;
    cout<<"inital array"<<endl;
    for(int i=0 ;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nafter rotate"<<endl;
    rotate(arr,n,k);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

