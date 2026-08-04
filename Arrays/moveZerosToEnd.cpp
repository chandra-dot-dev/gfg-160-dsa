#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Elements: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int pos = 0;
    for(int i =0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[pos++]);
        }
    }
    cout<<"After moving Zeros to End: ";
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}