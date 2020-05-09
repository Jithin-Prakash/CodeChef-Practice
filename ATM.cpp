#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int x;
	float y;
	scanf("%d%f",&x,&y);
	if(x % 5 == 0){
	    float z =x + 0.5;
	    if(z < y){
	        y -= z;
	        cout<<endl<<y;
	    }
	    else printf("%.02f",y);
	}
	else printf("%.02f",y);

	return 0;
}
