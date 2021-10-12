#include<iostream>
using namespace std;
int main(){
    int n,temp,i,j,arr[50];
    cout<<"Enter the no of array size you want "<<endl;
    cin>>n;

    cout<<"please enter "<<n<<"elements"<<endl;

    for (i=0; i<n; i++)
    cin>>arr[i];

    for (i=0; i<n-1; i++){
        for (j=0; j<n-1; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"sorted elements are:"<<endl;
    for (i=0; i<n; i++){
        
        cout<<arr[ i ]<<endl;
    }
    return 0;


}