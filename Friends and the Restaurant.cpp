#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
	    
	   ll a[n],b[n];
	   vector<ll> c(n);
	   for(ll i=0;i<n;i++) cin>>a[i];
	   for(ll i=0;i<n;i++) cin>>b[i];
	   for(ll i=0;i<n;i++) c[i]=b[i]-a[i];	   
	   
	   sort(c.begin(),c.end());
	   
	   ll i=n-1, j=0,k=0;
	   while(j<i){
	   	  //if(j==i)break;
	   	  
	   	  if(c[i]+c[j]>=0){
	   	  	  k++;
	   	  	  j+=1,i-=1;
			}
		   else
		     j+=1;
	   }
	   cout<<k<<endl;
	}
	return 0;
}
