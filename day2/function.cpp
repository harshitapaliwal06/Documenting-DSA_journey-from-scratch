#include<iostream>
using namespace std ;
void greet(){
    cout<<"first function";
}
int Add(int x,int y)
{
    return x+y;
}
int ArrayMax(int arr1[],int n){
    int Maxi = arr1[0];
    for(int i=0;i<n;i++){
        if(arr1[i]>Maxi)
        {
            Maxi=arr1[i];
        }
    }
    return Maxi;
}

// compiler first comes to main executes it then see function call jumps to function greet then return back to main()
int main()
{
    cout<<"hey there";
    greet();
    cout<<endl;
    Add(20,30);
    int ans = Add(30,60);
    cout<<ans<<endl;
 int arr1[] = {10,20,30,40,50,60};
   int anr = ArrayMax(arr1,6);
   cout << anr;
}