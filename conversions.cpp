#include<bits/stdc++.h>
using namespace std;
int bTd(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int bTo(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}
int hTd(string o){
    int ans=0;
    int x=1;
    int s=o.size();
    for(int i=s-1; i>=0; i--){
        if(o[i]>='0' && o[i]<='9'){
            ans+-x*(o[i]-'0');
        }
        else if(o[i]>='A' && o[i]<='F'){
            ans+=x*(o[i]-'A'+10);
        }
        x*=16;
        return ans;
    }
}
int dTb(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=2;
    }
    x/=2;
    while(x>0){
        int last=n/x;
        n-=last*x;
        x/=2;
        ans=ans*10+last;
    }
    return ans;
}
int dTo(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=8;
    }
    x/=8;
    while(x>0){
        int last=n/x;
        n-=last*x;
        x/=8;
        ans=ans*10+last;
    }
    return ans;
}
string dTh(int n){
    int x=1;
    string ans=" ";
    while(x<=n){
        x*=16;
    }
    x/=16;
    while(x>0){
        int last=n/x;
        n-=last*x;
        x/=16;
        if(last<=9){
            ans=ans+to_string(last);
        }
        else{
            char c='A'+last-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    int n, m, x, y, z;
    cin>>n>>m>>x>>y>>z;
    string o;
    cin>>o;
    cout<<bTd(n)<<endl;
    cout<<bTo(m)<<endl;
    cout<<hTd(o)<<endl;
    cout<<dTb(x)<<endl;
    cout<<dTo(y)<<endl;
    cout<<dTh(z)<<endl;
}
