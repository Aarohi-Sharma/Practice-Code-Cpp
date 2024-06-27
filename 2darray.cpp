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
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cin>>x;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(arr[i][j]==x){
                cout<<"Found at "<<i<<" "<<j;
            }
        }
    }
}
