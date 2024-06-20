#include<iostream>
using namespace std;
int fact(int n){
    int facto=1;
    for (int i=n; i>=1; i--){
        facto=facto*i;
    }
    return facto;
}
int main(){
    int n;
    int r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
}
