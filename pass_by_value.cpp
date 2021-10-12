# include<iostream>
using namespace std;
void passByValue(int x, int y){
    int z=x; 
    x=y;
    y=z;
}
int main(){
    int a=5, b=6;
    passByValue(a,b);
    cout<<"Before swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<endl;
    cout<<"After swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<endl;
    return 0;
}