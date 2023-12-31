// implementing fobonacci series using c++

#include<iostream>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  int prev = 0;
  int current = 1;
  while(t--){
      int tmp = prev;
      prev = current;
      current = prev + tmp;
  }
  cout<<prev<<endl;
}
