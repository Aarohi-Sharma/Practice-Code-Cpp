#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin>>n>>m;
    cout<<"Enter elements:";
    int arr[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    int r=0, c=m-1;
    bool found=false;
    while(r<n && c>=0){
        if (arr[r][c]==x){
            found=true;
        }
        else if(arr[r][c]>x){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"found";
    }
    else{
        cout<<"no";
    }
}
