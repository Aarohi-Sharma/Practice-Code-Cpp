#include<iostream>
using namespace std;
int main(){
    int save;
    cout<<"Enter savings: ";
    cin>>save;
    if (save>1000){
        if (save>1200){
            cout<<"Mall";
        }
        else if(save>1500){
            cout<<"Cafe";
        }
        cout<<"Rashmi";
    }
    else if(save>700){
        cout<<"Neha";
    }
    else{
        cout<<"Friends";
    }
}
