// Binary search First and Last occur finding
#include<bits/stdc++.h>
using namespace std;

vector<int> FirstLastOccur(int ar[],int len, int target){
    vector<int>ans;
    int r = len-1;
    int l = 0;
    int m;
    while(l<=r){
        m = (l+r)/2;
        if(ar[m]==target){
            int first = m,last=m;
            first--;
            last++;
            while(ar[first]==target)
            {
                first--;
            }
            while(ar[last]==target)
            {
                last++;
            }
            ans.push_back(first+1);
            ans.push_back(last-1);
            return ans;
        }
        if(ar[m]>target) r = m-1;
        else l = m+1;
    }
    return {-1,-1};
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
        vector<int>ans;
        ans = FirstLastOccur(ar,len,n);
        if(ans[0]==-1) cout<<"Not Found\n";
        else cout<<"First occur: "<<ans[0]+1<<" Last Occur: "<<ans[1]+1<<endl;
    }
    return 0;
}
