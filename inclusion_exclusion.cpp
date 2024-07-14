#include<iostream>
using namespace std;
int divisible(int n, int a, int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return (c1+c2-c3);
}
int gcd(int n, int m){
    while(m!=0){
        int rem=n%m;
        n=m;
        m=rem;
    }
    return n;
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<divisible(a, b, c)<<endl;
    int n, m;
    cin>>n>>m;
    cout<<gcd(n, m)<<endl;
}
