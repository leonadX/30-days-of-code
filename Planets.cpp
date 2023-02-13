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

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t; 
	 cin>>t;
	
	while(t--){
	   ll n,c;
	    cin>>n>>c;
	   
	   map<ll, ll> m;
	   vector<ll> a(n);
	    for(int i=0;i<n;i++){
		     cin>>a[i];
		     if(m.find(a[i])!=m.end()) m[a[i]]+=1;
		     else m[a[i]]=1;
	     }
		
	   sort(a.begin(),a.end());
	   
	   ll k=1,ans=0;
	    for(auto l: m){
	    	ans+=min(l.second, c);
		}
		cout<<ans<<endl;
	}
	return 0;
}
