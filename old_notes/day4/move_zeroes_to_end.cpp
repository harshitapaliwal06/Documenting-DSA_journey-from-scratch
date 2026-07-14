#include<bits/stdc++.h>
using namespace std ;
void move(int arr[],int n){
    int x=0;
    int temp[n];
    for(int i=0 ;i<=n-1 ; i++){
         if(arr[i]!=0){
            temp[x] =arr[i];
            x++;
         }
    }
    for(int i=0 ; i<=x-1;i++){
           arr[i]=temp[i];

    }
    for(int i = x ; i<=n-1 ;i++){
        arr[i]=0;
    }
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
    cout<<"inital array"<<endl;
    for(int i=0 ;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n ater moving "<<endl;
    move(arr,n);
    for(int i=0 ;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;}