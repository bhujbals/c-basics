#include<iostream>
using namespace std;
int main(){
    
    void search(struct node *q,int data);
        while(q!=NULL)
        {
            if (data==q->data)
            {
                cout<<"Element found"<<data;
                return 0;
            }
            q=q->next;
        }
        cout<<"\nElement not found:";
    }
