// url = https://cses.fi/problemset/task/1650

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int ar[n+1];
    int ans[n+1];
    for(int i=0; i<n; i++){
        cin>>ar[i];
        if(i==0){
            ans[i] = ar[i];
        }
        else{
            ans[i] = (ans[i-1]^ar[i]);
        }
    }
    //for(int i=0; i<n ; i++) cout<<ans[i]<<' ';
    //cout<<endl;
    while(q--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            cout<<ans[b-1]<<endl;
        }
        else{
            cout<<(ans[b-1]^ans[a-2])<<endl;
        }
    }
    return 0;
}
