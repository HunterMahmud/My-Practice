#include<bits/stdc++.h>
#include<stdlib.h> // include this if you are solving in C language
using namespace std;
#define node struct Node


node{
    int data;
    node *next;
};

int main(){
    node *a=NULL,*b=NULL,*c=NULL;
    // memory allocation
    a = (node *)malloc(sizeof(node));
    b = (node *)malloc(sizeof(node));
    c = (node *)malloc(sizeof(node));
    a->data = 10;
    b->data = 20;
    c->data = 30;
    c->next = NULL;
    a->next = b;
    b->next = c;
    while(a!=NULL){
        cout<<a->data<<' ';
        a = a->next;
    }
    return 0;
}
