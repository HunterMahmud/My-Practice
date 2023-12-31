#include <iostream>
using namespace std;

#define capasity 3
int stack[capasity];
int top = -1;
void push(int x){
    if(top<capasity-1){
        top++;
        stack[top] = x;
        cout<<"Successfully added: "<<x<<endl;
    }
    else{
        cout<<"Stack limit is exceeded\nCan't add: "<<x<<endl;
    }
}

int pop(){
    if(top>=0){
        int x = stack[top];
        top--;
        return x; 
    }
    cout<<"Error occured in pop! Stack Limit exceeded\n";
    return -1;
}

int peek(){
    if(top>=0){
        return stack[top];
    }
    cout<<"Error occured in peek! Stack Limit exceeded\n";
    return -1;
}

int main()
{
    cout<<"i am implementing stack\n";
    cout<<peek()<<endl; // checking the top value before pushing any items to the stack
  
    push(10); // value 10 pushing
    push(20); // value 20 pushing
    push(30); // value 30 pushing
  
    cout<<"Successfully remove: "<<pop()<<endl; // checking pop function work or not
  
    push(5);
    push(45);
  
    cout<<"stack all value is: \n"; 
    for(int i=0; i<=top; i++){
        cout<<stack[i]<<endl; // printing all values of the stack
    }
    cout<<"Top value of stack is: "<<peek()<<endl; // lastly checking the top value of the stack
    
}
