#include<bits/stdc++.h>
using namespace std;
int main(){
    int mx=INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        mx=max(mx, arr[i]);
        cout<<mx<<endl;
    }
}
