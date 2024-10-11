#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxx=INT_MIN;
    int curr=0;
    for(int i=0; i<n; i++){
        curr+=arr[i];
        if (curr<0){
            curr=0;
        }
        maxx=max(maxx, curr);
    }
    cout<<maxx;
}
