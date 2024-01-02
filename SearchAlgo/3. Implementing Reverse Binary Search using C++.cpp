// Binary reverse search
#include<bits/stdc++.h>
using namespace std;

int Reversebinary(int ar[],int len, int target){
    int r = len-1;
    int l = 0;
    int m;
    while(l<=r){
        m = (l+r)/2;
        if(ar[m]==target){
            return m;
        }
        if(ar[m]>target) l = m+1;
        else r = m-1;
    }
    return -1;
}

int main(){
    int ar[] = {10,9,8,7,6,5,4,4,3,2,1};
    int len = sizeof(ar)/sizeof(ar[0]);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = Reversebinary(ar,len,n);
        if(ans==-1) cout<<"Not Found\n";
        else cout<<"Founded in: "<<ans+1<<endl;
    }
    return 0;
}
