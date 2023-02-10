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
	   ll n;
	    cin>>n;
	   
	   string s;
	    cin>>s;
	    
	   vector<bool> seen(n+1,false); 
	   vector<bool> used(n+1,false); 
	   for(int i=0;i<n;i++){
	   	 if(s[i]=='1'){
		    seen[i+1]= true;
		  }
	   }
	   	 
	   ll ans=0;
	   bool flag = true;	 
	   for(int i=1;i<=n;i++){
	   	 for(int j=i;j<=n;j+=i){
	   	      if(!seen[j]){
	   	     	   if(!used[j]) ans+=i;
	   	           used[j] = true;
			  }
			  else break;	
	      }   
	   }
	   cout<<ans<<endl;	 
	}
	return 0;
}
