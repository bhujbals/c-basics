#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the no"<<endl;
    cin>>n;
    bool flag=0;
    for(i=2; i<=sqrt(n); i++){
        if (n%i==0){
            cout<<"non prime no"<<endl;
            flag=1;
            break;
        }
        if (flag==0){
            cout<<"prime no"<<endl;
            break;
        }
        
    }
}