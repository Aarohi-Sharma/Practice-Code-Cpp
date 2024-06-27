#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4]={10, 20, 30, 40};
    cout<<arr[3]<<endl;
    int n;
    cin>>n;
    int array[n];
    cout<<"Enter elements:";
    for (int i=0; i<n; i++){
        cin>>array[i];
    }
    for (int i=0; i<n; i++){
        cout<<array[i]<<endl;
    }
    int maxn=INT_MIN;
    int minn=INT_MAX;
    for (int i=0; i<n; i++){
        maxn=max(maxn, arr[i]);
        minn=min(minn, arr[i]);
    }
    cout<<maxn<<endl;
    cout<<minn;
}
