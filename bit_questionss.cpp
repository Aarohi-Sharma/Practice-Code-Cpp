#include<iostream>
using namespace std;
int unique(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int setBit(int n, int pos){
    return ((n&(1<<pos))!=0);
}
int unique2(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for (int i=0; i<n; i++){
        if(setBit(arr[i], pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}
bool getBit(int n, int pos){
    return ((n&(1<<pos))!=0);
}
int setBitt(int n, int pos){
    return (n | (1<<pos));
}
int unique3(int arr[], int n){
    int result=0;
    for (int i=0; i<64; i++){
        int sum=0;
        for (int j=0; j<n; j++){
            if(getBit(arr[j], i)){
                sum++;
            }
        }
        if (sum%3!=0){
            result=setBitt(result, i);
        }
    }
    return result;
}
int main(){
    int arr[]={1, 2, 3, 4, 1, 2, 3};
    cout<<unique(arr, 7)<<endl;
    int array[]={1, 2, 3, 1, 2, 3, 5, 7};
    unique2(array, 8);
    int b[]={1, 2, 3, 1, 2, 3, 1, 2, 3, 4};
    cout<<unique3(b, 10)<<endl;
}
