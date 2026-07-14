#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter number of elements"<<endl;
    int n ;
    cin>>n;
    int arr[n];
    cout<<"enter values for array"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>> arr[i];
    }
    cout<<"print"<<endl;
    for (int i=0;i<=n-1;i++){
        cout<<arr[i]<<"    ";
    }
}
