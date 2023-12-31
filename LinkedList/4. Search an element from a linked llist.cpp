#include<bits/stdc++.h>
using namespace std;
#define node struct Node   // defining for shortcut use of struct node

node{
  int data;
  node *next;
};
// making linked list fron given array
node *LinkedList(int ar[], int len){
    node *head= NULL, *current = NULL, *tmp = NULL;
    
    for(int i=0; i<len; i++){
        tmp = (node *)malloc(sizeof(node));
        tmp->data = ar[i];
        tmp->next = NULL;
        if(head == NULL){
            head = tmp;
            current = tmp;
        }
        else{
            current->next = tmp;
            current = current->next;
        }
    }
    return head;
}
// searching a specific values in linked list
int searchInLinkedList(node *head, int val){
    int cnt = 0;
   
    while(head!=NULL){
        cnt++;
        if(head->data == val) return cnt;
        else {
            head = head->next;
        }
    }
    return -1; // if not found then return -1
}

int main(){
    int ar[] = {1,5,3,8,5,8,3,4,53,45,6,4,8};
    int len = sizeof(ar)/sizeof(ar[0]);
    node *head;
    head = (node *)malloc(sizeof(node));
    head = LinkedList(ar,len);
    cout<<"Printing all the values of array after making linked list: \n";
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    int t;
    cout<<"Enter the test case number how many times do you want to search in linked list: \n";
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node *current = LinkedList(ar,len);
        int ans = searchInLinkedList(current, n);
        if(ans==-1) cout<<"Not found\n";
        else cout<<"Found in position: "<<ans<<endl;
    }
    
    return 0;
}
