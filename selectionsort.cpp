#include <iostream>
using namespace std;
int main(){
    int n,arr[5],temp;
    cout<<"Enter the no of array you want to search"<<endl;
    cin>>n;
    cout<<"enter"<<n<<" elements"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<endl;
   
    cout<<"YOUR RESULT IS :";
    cout<<endl;
    for (int j=0; j<n; j++){
        cout<<arr[j]<<endl;
    }
     return 0;

}