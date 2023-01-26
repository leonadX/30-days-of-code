#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int t; 
	 cin>>t;
	
	while(t--){
		ll n;
		string s;
	   	 cin>>n>>s;
	   	
	   	ll sum=0;
	   	for(ll i=0;i<n;i++){
	   		if(s[i]=='L') sum+=i;
	   		else sum+=n-i-1;
		}

        vector<ll> ans;
        if(n==1) ans.push_back(0);
	    else{
		for(ll j=0;j<n/2;j++){
		  if(s[j]=='L'){
			s[j]='R';
			sum+=n-2*j-1;
			ans.push_back(sum);
		  }
		  if(s[n-j-1]=='R'){
			s[n-j-1]='L';
			sum+=2*(n-j-1)-n+1;
			ans.push_back(sum);
		  }
		 } 
	    }
		ll k=ans.size();
		for(ll i=k;i<n;i++) ans.push_back(sum);
		
		for(ll i=0;i<n;i++)
		 cout<<ans[i]<<" ";
		  
		cout<<endl;
	}
	return 0;
}
