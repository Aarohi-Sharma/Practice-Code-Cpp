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
    int sum=0;
    int maxx=INT_MIN;
    for (int i=0; i<n; i++){
        for (int j=i; j<n;j++){
            for (int k=i; k<=j; k++){
                sum+=arr[k];
            }
            maxx=max(maxx, sum);
            sum=0;
        }
    }
    cout<<maxx;
}
