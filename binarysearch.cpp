#include<iostream>
using namespace std;
int bsearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int m=(s+e)/2;
        if (arr[m]==key){
            return m;
        }
        else if(arr[m]>key){
            e=m-1;
        }
        else{
            s=m+1;
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
    cout<<bsearch(array, n, key)<<endl;
}
