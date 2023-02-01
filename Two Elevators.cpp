#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t; 
	 cin>>t;
	
	while(t--){
	   int a, b, c;
	    cin>>a>>b>>c;
	    
	   if(abs(a-1)<(abs(b-c)+abs(c-1))) cout<<1<<endl;
	   else if(abs(a-1)>(abs(b-c)+abs(c-1))) cout<<2<<endl;
	   else cout<<3<<endl;
	}
	return 0;
}
