#include<iostream>
using namespace std;
int isort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    } 
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
    cout<<isort(array, n)<<endl;
}
