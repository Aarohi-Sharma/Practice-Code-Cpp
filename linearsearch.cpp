#include<bits/stdc++.h>
using namespace std;
int lsearch(int arr[], int n,  int key){
    for (int i=0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
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
    int key;
    cin>>key;
    cout<<lsearch(array, n, key)<<endl;
}
