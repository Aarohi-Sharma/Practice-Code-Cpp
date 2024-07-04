#include<iostream>
using namespace std;
int bsort(int arr[], int n){
    int count=1;
    while(count<n){
        for(int i=0; i<n-count; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        count++;
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
    cout<<bsort(array, n)<<endl;
}
