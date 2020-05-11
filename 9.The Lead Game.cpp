/*#include<iostream>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,win,winner,winn;
    cin>>n;
    vector<pair<int,int> > arr(n);
    int a1=0,b1=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i].first=a;
        arr[i].second=b;
    }
    win=abs(arr[0].first-arr[0].second);
    winner=1;

    for(int i=1; i<n; i++){
        if(arr[i].first > arr[i].second){
            winn=arr[i].first-arr[i].second;
            if(winn>=win){                              MESSED UP AFTER GETTING IT RIGHT
                win=winn;
                winner=1;
            }
        }
        else{
            winn=arr[i].second-arr[i].first;
            if(winn>=win){
                win=winn;
                winner=2;
            }
        }
    }
    cout<<winner<<" "<<win;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int> > arr(n);
	int a1=0,b1=0;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		a1+=a;
		b1+=b;
      arr[i].first=a1;
      arr[i].second=b1;
	}
	int maxi=-1;
	int who;
	for(int i=0;i<n;i++)
	{
		int diff=arr[i].first-arr[i].second;            //RIGHT CODE FROM INTERNET
		if(abs(diff)>maxi)
		{
			maxi=abs(diff);
			if(diff>0)
			{
				who=1;
			}
			else
			who=2;
		}
	}
	cout<<who<<" "<<maxi<<endl;
}
