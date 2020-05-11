#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,arr[12],counter;
    for(int i=0;i<12;i++)
        arr[i]=pow(2,i);
    cin>>t;
    while(t--){
        counter=0;
        cin>>n;
        while(n>0){
            for(int i=11;i>=0;i--){
                if(n>=arr[i]){
                    n-=arr[i];
                    counter++;
                    i++;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
