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
	   int n;
	    //cin>>n;
	    
	   string s;
	    cin>>s;
	   
	   vector< pair<char, ll> > a;
	   for(ll i=1;i<s.length()-1;i++) a.push_back(make_pair(s[i],i+1));
	   
	   int sum=0;
	   vector<ll> ans;
	   ans.push_back(1);
	   if(s[0]>=s[s.length()-1]){
	   	 sort(a.rbegin(),a.rend());
	   	 for(ll i=0;i<a.size();i++){
	   	 	   if(a[i].first<=s[0] && a[i].first>=s[s.length()-1]){
	   	 	   	    ans.push_back(a[i].second);
				}
			}
	   }else{
	   	 sort(a.begin(),a.end());
	   	 for(ll i=0;i<a.size();i++){
	   	 	   if(a[i].first>=s[0] && a[i].first<=s[s.length()-1]){
	   	 	   	    ans.push_back(a[i].second);
				}
			}
	   }
	   
	   ans.push_back(s.length());
	   sum=abs(((int)s[0]-96) - ((int)s[s.length()-1]-96));
	   cout<<sum<<" "<<ans.size()<<endl;
	   for(ll i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	   cout<<endl;
	}
	return 0;
}
