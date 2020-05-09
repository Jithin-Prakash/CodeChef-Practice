#include<iostream>
#include<stdio.h>
int main(){
    using namespace std;
    int t,n;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        cin>>n;
        int sum = 0;
        while(n != 0){
            sum = sum + (n % 10);
            n /= 10;
        }
        cout<<sum<<endl;
    }
    return 0 ;
}
