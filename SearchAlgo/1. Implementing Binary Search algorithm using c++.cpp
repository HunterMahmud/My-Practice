// Implementing binary search algorithm using c++

#include<iostream>
using namespace std;

int main()
{
    int ar[] = {1,3,4,5,6,7,8,9,11,14,36,68,89};
    int len = sizeof(ar)/sizeof(ar[0]);

    int t;
    cin>>t;
    while(t--){
        int l =0, r = len-1;
        int m ;
        int target;
        cin>>target;
        bool flag = true;
        while(l<=r){
            m = (l+r)/2;
            if(ar[m]==target){
                cout<<"find: "<<target<<" in position: "<<m+1<<endl;
                flag = false;
                break;
            }
            if(ar[m]>target) r = m-1;
            else l = m+1;
        }
        if(flag) cout<<"Not Found"<<endl;
    }
    cout<<endl;
}
