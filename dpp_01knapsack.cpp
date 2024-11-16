#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2, MOD=1e9+7;
int val[N], wt[N];
int knapsack(int n, int w){
    if(w<=0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    if(wt[n-1]>w){
        return knapsack(n-1, w);
    }
    return max(knapsack(n-1, w), knapsack(n-1, w-wt[n-1])+val[n-1]);
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>wt[i];
    }
    for(int i=0; i<n; i++){
        cin>>val[i];
    }
    int w;
    cin>>w;
    cout<<knapsack(n, w);
}
