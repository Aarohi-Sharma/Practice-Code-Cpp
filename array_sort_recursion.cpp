#include<iostream>
using namespace std;
bool sort(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restarr=sort(arr+1, n-1);
    if (arr[0]<arr[1] && restarr){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int arr[]={1, 2, 3, 4, 5};
    cout<<sort(arr, 5);
}
