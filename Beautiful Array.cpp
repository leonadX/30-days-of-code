#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int check(ll a){
	if(a>0)
	  return 1;
	return 0;
}

int add(ll a, ll b, ll k){
	if(b>=k)
	 return a;
	if(b>0)
	 return b;
	return 0;
}

int main() {
	int t; 
	 cin>>t;
	 
	while(t--){
		ll n,k,b,s;
		 cin>>n>>k>>b>>s;
		
		if(b*k > s || (n==1 && b*k!=s)){
			cout<<-1<<endl;
		}else if(n==1 && b*k==s){
		    cout<<b*k<<endl;
		}else{
			int diff=add(k-1,s-b*k, k);
			ll l=b*k+diff;
			
			if((s-l)/(n-1)+check((s-l)%(n-1)) < k){
			    vector<ll> a;
				a.push_back(l);
			
				for(int i=1;i<n;i++)
					a.push_back((s-l)/(n-1));
				
				for(int i=1;i<=((s-l)%(n-1));i++)
				  a[i] += 1;
				
				for(int i=0;i<n;i++)
			       cout<<a[i]<<" ";
				cout<<endl;  
			}
			else{
				cout<<-1<<endl;
			}
		}
	}
	 
	return 0;
}
