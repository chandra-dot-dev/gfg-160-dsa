#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of List: ";
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int lar = INT_MIN;
    int sLar = INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>lar){
            sLar = lar;
            lar = arr[i];
        }else if (sLar<arr[i] && arr[i]!=lar){
            sLar = arr[i];
        }
    }
    if(sLar==INT_MIN){
        cout<<"NO SECOND LARGEST ELEMENT"<<endl;
    }else{
        cout<<"SECOND LARGEST ELEMENT : "<<sLar<<endl;
    }
    return 0;

}