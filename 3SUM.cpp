#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> seen(10,0);

int main() {
	int t; 
	 cin>>t;
	 
	while(t--){
		int n;
		 cin >> n;
		
		int a;
		fill(seen.begin(),seen.end(), 0);
		vector<int> ls(0);
		 for(int i=0;i<n;i++){
		 	cin>>a;
		 	if(seen[a%10] < 3){
			   ls.push_back(a%10);
			   seen[a%10] += 1;
		    }
		 }
		
		bool ans=false;
		int dp[ls.size()][23];
		
		for(int i = 0;i<ls.size();i++)
		 for(int j = i+1;j<ls.size();j++)
		  for(int k = j+1;k<ls.size();k++)
		      if((ls[i] + ls[j] + ls[k])%10 == 3){
		      	ans= true;
		      	break;
			  }
		
		if(ans) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	 
	return 0;
}
