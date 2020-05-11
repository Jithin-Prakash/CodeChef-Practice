/*#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int t, n;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        cin>>n;                         GIVES RIGHT SOLUTION BUT NOT APPROVED BY CODECHEF
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    v.erase( unique( v.begin(), v.end() ), v.end() );
    for(int i = 0 ; i < v.size() ; i++)
        cout<<v[i]<<"\n";
    return 0 ;
}
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, arr[1000001]={0}, b;
    scanf("%d", &a);
    while(a--) {
        scanf("%d", &b);
        arr[b]++;
    }                                                   //NOT MY CODE
    for(int i=0; i<1000001; i++) {
        while(arr[i]>0) {
            printf("%d\n", i);
            arr[i]--;
        }
    }
    return 0;
}
