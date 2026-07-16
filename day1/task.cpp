#include<iostream>
using namespace std;
int main(){
    //  task 1 : taking input from user and print 
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0 ;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<< " ";

    }
    cout<<endl;

    // task 2 : sum of array
     int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    // task 3 : max element 
    int  max = arr[0];
    for ( int i=0 ; i<n ; i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    cout<<max<<endl;
    //task 4 : min element
    int min = arr[0];
    for ( int i=0 ; i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min<<endl;
    //task 5: reverse array 
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //task 6 : linear search 
    int element ;
    cin >> element;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            cout<<i<<endl;;
        }
    }
    //task 7 : count even 
    int count =0;
    for (int i=0;i<n;i++){
        if(arr[i]%2==0){
           count++;
        }
    }
    cout<< count <<endl;
    //task 8 : count odd
  int count1=0;
    for (int i=0;i<n;i++){
    if(arr[i]%2==0){
           count1++;
        }
    }
    cout<<count1;
}