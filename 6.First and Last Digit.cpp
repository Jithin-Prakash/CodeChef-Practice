#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, first, last;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        cin>>n;
        last = n % 10;
        while(n){
            first = n % 10;
            n /= 10;
        }
        cout<<(last + first)<<endl;
    }
    return 0;
}
