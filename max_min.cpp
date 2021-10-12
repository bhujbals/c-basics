#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the how many no of array you want to search"<<endl;
    cin>>n;
    int i;
    int arr[i];
    for (int i=1; i<n; i++){
        cin>>arr[i];
    }

    int maxNO=INT_MIN;
    int minNo=INT_MAX;

    for (int i=0;i<n; i++){
        maxNO=max(maxNO,arr[i]);
        minNo=min(minNo,arr[i]);
        return 0;
    }
    cout<<maxNO<<" "<<minNo<<endl;
}