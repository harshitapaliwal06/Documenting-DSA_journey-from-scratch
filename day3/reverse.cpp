#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> arr, int m){

    int n = arr.size();

    int s = m + 1;
    int e = n - 1;

    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    return arr;
}

void print(vector<int> arr){

    int n = arr.size();

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){

    vector<int> arr = {3,1,7,2,9};

    vector<int> ans = reverse(arr, 2);

    print(ans);
}
