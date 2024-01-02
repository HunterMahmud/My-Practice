// Binary search finding how many times a number occur using first and last occur
#include<bits/stdc++.h>
using namespace std;

int FirstOccur(int ar[],int len, int target){
    int ans=-1;
    int r = len-1;
    int l = 0;
    int m;
    while(l<=r){
        m = (l+r)/2;
        if(ar[m]==target){
            ans = m;
            r = m-1;
        }
        else if(ar[m]>target) r = m-1;
        else l = m+1;
    }
    return ans;
}

int LastOccur(int ar[],int len, int target){
    int ans=-1;
    int r = len-1;
    int l = 0;
    int m;
    while(l<=r){
        m = (l+r)/2;
        if(ar[m]==target){
            ans = m;
            l = m+1;

        }
        else if(ar[m]>target) r = m-1;
        else l = m+1;
    }
    return ans;
}

int main(){
    int ar[] = {1,2,3,4,4,4,5,5,6,7,8,9};
    int len = sizeof(ar)/sizeof(ar[0]);
    for(auto i: ar) cout<<i<<' ';
    cout<<endl;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans={FirstOccur(ar,len,n),LastOccur(ar,len,n)};
        if(ans[0]==-1) cout<<"Not Found\n";
        else cout<<"Number is occured: "<<ans[1]-ans[0]+1<<endl;
    }
    return 0;
}
