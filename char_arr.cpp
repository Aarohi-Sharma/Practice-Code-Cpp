#include<iostream>
using namespace std;
int main(){
    int n;
    char arr[n+1];
    cin>>n;
    cin>>arr;
    cout<<arr<<endl;
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<" ";
        i++;
    }
    bool check=1;
    for(int i=0; i<n; i++){
        if (arr[i]!=arr[n-i-1]){
            check=0;
            break;
        }
    }
    if (check==true){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
}
