#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    for(int i = 0 ; i < t; i++){
        cin>>n;
        int fact = 1;
        while(n > 0){
            fact *= n;
            n--;
        }
        cout<<fact<<"\n";
    }
    return 0;
}

