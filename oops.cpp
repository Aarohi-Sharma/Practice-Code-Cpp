#include<bits/stdc++.h>
using namespace std;
class student{
        string name;
    public:
    int age;
    bool gender;
    student(){
        cout<<"Default constructor"<<endl;
    }
    student(string s, int a, int g){
        cout<<"Parameterized constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }
    student(student &a){
        cout<<"Copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    ~student(){
        cout<<"destructor called"<<endl;
    }
    void setName(string s){
        name=s;
    }
    void getName(){
        cout<<name<<endl;
    }
    void print(){
       cout<<"Name: "<<name<<endl;
       cout<<"Age: "<<age<<endl;
       cout<<"Gender: "<<gender<<endl; 
    }
};
int main(){
    student arr[3];
    for(int i=0; i<3; i++){
        string s;
        cin>>s;
        arr[i].setName(s);
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }
    for(int i=0; i<3; i++){
        arr[i].print();
    }
    student a("pol", 8, 0);
    student b;
    student c=a;
}
