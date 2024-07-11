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
    const int N=1e4+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i]=-1;
    }
    int minn=INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[arr[i]]!=-1){
            minn=min(minn, idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(minn==INT_MAX){
        cout<<"-1"<<endl;
    }    
    else{
        cout<<minn+1<<endl;
    }
}
