#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows and colmn you want"<<endl;
    cin>>n;

    for (int i=n;i>=1; i++){
        for (int j=1; j<=n; j++){
            cout<<"*";
        }
    cout<<endl;
    }
    return 0
}
   