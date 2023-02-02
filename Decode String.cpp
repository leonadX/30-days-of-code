#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
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
	   int n,l;
	    cin>>n;
	    
	   string s,p="";
	    cin>>s;
	    //cout<<s.substr(0,3)
	   for(int i=0;i<n;i++){
	   	 //if(s[i]=='0') continue;
	   	
	   	 if(i+2<n){
	   	 	if(s[i+2]=='0' && s[i+3]!='0')
	   	 	  l = getint(s.substr(i,2)), i+=2;
			else l=(int)s[i]-48;
		  }
	     else
	      l=(int)s[i]-48;
	      
	     p+=(char)(l+96);
       }
       cout<<p<<endl;
	}
	return 0;
}
