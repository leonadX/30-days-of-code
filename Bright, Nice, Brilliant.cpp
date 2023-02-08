#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 1000000007
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getint(string s){
    int a=((int)s[0]-48)*10+(int)s[1]-48;
    return a;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t; 
	 cin>>t;
	
	while(t--){
	   ll n;
	    cin>>n;
	    
	   if(n>=1) cout<<1<<endl;
	   if(n>1){
	   	  for(int i=2;i<=n;i++){
	   	      cout<<1<<" ";
				 for(int j=1;j<i-1;j++) cout<<0<<" ";
			  cout<<1<<endl;	
		   }
	   }
	}
	return 0;
}
