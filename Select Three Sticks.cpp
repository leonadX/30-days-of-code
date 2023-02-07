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
	    
	   vector<int> a(n);
	   for(ll i=0;i<n;i++) cin>>a[i];
	   
	   sort(a.begin(),a.end());
	   
	   int ans=MAXN;
	   for(int i=1;i<=n-2;i++){
	   	 ans=min(ans, a[i+1]-a[i-1]);
	   }
	   
	   cout<<ans<<endl;
	}
	return 0;
}
