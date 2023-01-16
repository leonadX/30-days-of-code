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

int32_t main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t; 
	 cin>>t;
	
	while(t--){
	   ll n;
	    cin>>n;
	    
	   if(n<=3 && n%2!=0) cout<<"NO"<<endl; 
	   else if(n%2 == 0){
	   	 cout<<"YES"<<endl;
	   	 for(int i=0;i<n;i++) cout<< (i%2==0 ? 1:-1) <<" ";
	   	 cout<<endl;
	   }else{
	   	 cout<<"YES"<<endl;
	   	 for(int i=0;i<n;i++) cout<< (i%2==0 ? (2-n)/2:n/2) <<" ";
	   	 cout<<endl;
	   }
	}
	return 0;
}
