#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int finds(string s, int n,string r[]){
	for(int i=0;i<n;i++)
		if(r[i]==s)
		 return 1;
  return 0;
}

int main() {
	int t; 
	 cin>>t;
	
	while(t--){
		int n;
	   	 cin>>n;
	   	
	   	map<string, int> mp;
	   	string s[n],r[n],p[n];
	   	 for(int i = 0;i<n;i++){
			cin>>s[i];
			mp[s[i]] = 1;
		 }
	   	 for(int i = 0;i<n;i++){
		    cin>>r[i];
		    if(mp.find(r[i]) != mp.end()) mp[r[i]] += 1;
		    else mp[r[i]] = 1;
		 }
		 for(int i = 0;i<n;i++){
		    cin>>p[i];
		    if(mp.find(p[i]) != mp.end()) mp[p[i]] += 1;
		    else mp[p[i]] = 1;
		 }
	   	
	   	int k;
		int sa=0,ra=0,pa=0;    
	   	for(int i=0;i<n;i++){
		   if(mp.find(s[i]) != mp.end()){
		   	  if(mp[s[i]] == 1) sa+=3;
			  else if(mp[s[i]]==2) sa+=1; 
		   }
	    }
	   	
		for(int i=0;i<n;i++){
	   	    if(mp.find(r[i]) != mp.end()){
		   	  if(mp[r[i]] == 1) ra+=3;
			  else if(mp[r[i]]==2) ra+=1; 
		    }
	   	}
	   	
	   	for(int i=0;i<n;i++){
	   		if(mp.find(p[i]) != mp.end()){
		   	  if(mp[p[i]] == 1) pa+=3;
			  else if(mp[p[i]]==2) pa+=1; 
		    }
		}
	   
	    cout<<sa<<" "<<ra<<" "<<pa<<endl;
	}
	return 0;
}
