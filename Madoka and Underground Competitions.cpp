#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int s,int k){
	if(s+1>k) return 1;
	return s+1;
}

int drc(int s,int k){
	if(s-1<1) return k;
	return s-1;
}

int main() {
	int t; 
	 cin>>t;
	
	while(t--){
	   int n,k,r,c;
	    cin>>n>>k>>r>>c;
	    
	   bool ans=false; 
	   char ch[n+1][n+1];
	   
	   for(int i=1;i<=n;i++)
	   	for(int l=1;l<=n;l++)
	   		 ch[i][l]='.';
	   
	   ch[r][c]='X';
	   for(int j=c;j<=n;j+=k){
	   	 ch[r][j]='X';
	   }
	   
	   for(int j=c;j>=0;j-=k){
	   	 ch[r][j]='X';
	   }
	   
	   int s=(c-1)%k + 1;
	   for(int i=r-1;i>0;i--){
	   	 s=inc(s,k);
	   	  for(int j=s;j<=n;j+=k)
	   	   ch[i][j]='X';
	   }
	   
	   s=(c-1)%k + 1;
	   for(int i=r+1;i<=n;i++){
	   	 s=drc(s,k);
	   	  for(int j=s;j<=n;j+=k)
	   	   ch[i][j]='X';
	   }
	   
	   for(int i=1;i<=n;i++){
	   	for(int l=1;l<=n;l++){
	   		 cout<<ch[i][l];
	   	}
	   	cout<<endl;
	   }
	}
	return 0;
}
