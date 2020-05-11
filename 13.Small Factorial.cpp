#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int fac=1;
        while(n){
            fac=fac*n;
            n--;
        }
        cout<<fac<<endl;
    }
    return 0;
}
