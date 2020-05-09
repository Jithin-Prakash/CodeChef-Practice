#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,counter=0;
    int x;
    cin>>n;
    cin>>k;
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        if(x % k == 0)
            counter++;
    }
    cout<<counter;
    return 0;
}
