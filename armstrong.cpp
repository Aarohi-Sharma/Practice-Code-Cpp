#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    int sum=0;
    while(n>0){
        int last=n%10;
        cout<<last<<endl;
        sum+=pow(last,3);
        n=n/10;
    }
    cout<<m<<endl;
    cout<<sum<<endl;
    if (m==sum){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not armstrong";
    }
}
