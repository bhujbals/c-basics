#include<iostream>
using namespace std;
void passByReference(int &a, int&b){
    int c=a;
    a=b;
    b=c;
}
int main(){
    int a=5;  int b=6;
    passByReference(a,b);
    cout<<"before swap"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<endl;
    cout<<"after swap"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<endl;
    return 0;
}