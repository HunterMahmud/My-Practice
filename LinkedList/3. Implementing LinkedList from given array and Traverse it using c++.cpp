#include<bits/stdc++.h>
using namespace std;

#define node struct Node

//making LinkedList structure
node{
   int data;
   node *next;
};
// making a Linked list using an array
node *LinkedList(int ar[], int len){
    node *temp = NULL, *head = NULL, *current = NULL;
    for(int i=0; i<len; i++){
        temp = (node *)malloc(sizeof(node));
        temp->data = ar[i];
        temp->next = NULL;
        if(head==NULL){
            head = temp;
            current = temp;
        }
        else {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}
int main(){
    int ar[] = {10,20,30,4,32,5,4,2,43,12,876};
    int len = sizeof(ar) / sizeof(ar[0]);
    node *head;
    head = LinkedList(ar,len);
    //traversing linked list
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    return 0;
}
