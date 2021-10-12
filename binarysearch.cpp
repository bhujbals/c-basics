#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid>key]){
            e=mid-1;
            return key;

        }
        else{
            e=mid+1;
            return key;
        }
        return -1;
    }
}
int main(){
    int n;
    cout<<"Enter the no of element you want to search"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int key;
    cout<<"Enter the element to search"<<endl;
    cin>>key;

    cout<<binarysearch(arr,n,key);
}


