// implementing linear search algorithm using c++

#include<iostream>
using namespace std;

int main() 
{
  int ar[] = {30,20,1,4,8,2,38,4,43,32,654,3};
  int len = sizeof(ar)/sizeof(ar[0]);
  bool flag = true;
  int target;
  cin>>target;
  for(int i=0; i<len; i++){
    if(ar[i] == target){ 
      cout<<"Found in: "<<i+1<<" position"<<endl;
      flag = false;
      break;
    }
  }
  if(flag) cout<<"Not found"<<endl;
  return 0;
}
