#include <iostream>
using namespace std ;
int main(){
    // arr for traversing and sum 
    
    int arr[]={10,20,30};
    int sum =0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<=size-1;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    //array 2 for traversing and printing 
    int arr2[4]={30,50,60};
    int size1 = sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0;i<=size1-1;i++){
        cout<<arr2[i]<< " " <<endl;

    }

    // taking array 3 to take user input and printing 
    int n;
    cout<<"enter number of elements";

    cin >>  n;
    int arr3[n];
    cout<<"enter elements of array";
    for (int i=0;i<=n-1;i++){
    cin>>arr3[i];

    }
    for (int i=0;i<=n-1;i++){
        cout<<arr3[i]<< " ";
    }

    
}