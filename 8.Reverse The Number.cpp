/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin >> n;
        int remainder,reversedNumber = 0;
        while(n != 0)
        {
            remainder = n%10;
            reversedNumber = reversedNumber*10 + remainder;
            n /= 10;
        cout<<reversedNumber<<endl;
    }
    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,reversedNumber = 0, remainder;
		cin>>n;
		while(n)
		{
		remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
		}
		cout<<reversedNumber<<endl;
	}
	return 0;
}
