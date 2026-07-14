#include<bits/stdc++.h>
using namespace std;
void Rotate(int arr[], int n , int k){
    k = k%n;
    int temp[k];
    for(int i =0;i<=k-1;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<=n-1;i++){
        arr[i-k]=arr[i];
    }
    for(int i = n-k ; i<=n-1;i++){
        arr[i]= temp[i-(n-k)];
    }
}
int main(){
    int n ;
    cout<<"enter n";
    cin >>n;
    cout<<"values"<<endl;
    int arr [n];
    for(int i=0 ; i<=n-1;i++){
        cin>>arr[i];
    }
    
    int k;
    cout<<"enter k";
    cin>>k;
    Rotate(arr,n,k);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}