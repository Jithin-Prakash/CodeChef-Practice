#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ,n;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        int counter = 0;
        cin>>n;
        while(n){
            if(n % 10 == 4)
                counter++;
            n /= 10;
        }
        cout<<counter<<endl;
    }
    return 0;
}
