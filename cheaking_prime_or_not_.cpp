# include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"Enter the no"<<endl;
    cin>>c;

    int i;
    for (i=2; i<c; i++){
         if (c==0|c==1){
            cout<<"not defined"<<endl;
        }
        else if (c%2==0){
            cout<<"Given no is prime"<<endl;
            break ;
        }
        else
        cout<<"not prime"<<endl;
        break;
    }
    return 0;
}