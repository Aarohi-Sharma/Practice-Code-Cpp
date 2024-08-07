#include<iostream>
using namespace std;
void Csort(int arr[], int n){
    int k=arr[0];
    for(int i=0; i<n; i++){
        k=max(k, arr[i]);
    }
    int count[10]={0};
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    for(int i=1; i<=k; i++){
        count[i]+=count[i-1];
    }
    int out[n];
    for(int i=n-1; i>=0; i--){
        out[--count[arr[i]]]=arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]=out[i];
    }
}
int main(){
    int arr[]={1, 3, 2, 3, 4, 1, 6, 4, 3};
    Csort(arr, 9);
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
}
