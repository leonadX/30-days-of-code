#include <set>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool check(int a, vector<int> b){
	for(int i=0;i<b.size();i++)
	  if(b[i]==a) return true;
	return false;
}

void calc(vector<int> s){
	bool found = false;
	 for(int i=0;i<s.size();i++){
		for(int j=i+1;j<s.size();j++){
			for(int k=j+1;k<s.size();k++){
			  if(!check(s[i]+s[j]+s[k], s)){
				cout<<"NO"<<endl;
				return;
			  }
			}
		  }
	    }
	cout<<"YES"<<endl;
}

int main() {
	int t;
	 cin>>t;
	 
	while(t--){
		int n,a;
		 cin>>n;
		
		vector<int> pos,neg,zer,arr;
		for(int i=0;i<n;i++){
			cin>>a;
			if(a>0) pos.push_back(a);
			else if(a<0) neg.push_back(a);
			else{
				if(zer.size() < 2)
				 zer.push_back(a);
			}
		}
		
		//cout<<pos.size()<<" "<<neg.size()<<endl;
		if(pos.size() > 2 || neg.size() > 2)
		  cout<<"NO"<<endl;
		else{
			vector<int> s;
			for(int i=0;i<neg.size();i++) s.push_back(neg[i]);
			for(int i=0;i<zer.size();i++) s.push_back(zer[i]);
			for(int i=0;i<pos.size();i++) s.push_back(pos[i]);
			
			//for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
			
			calc(s);
		}
	}
	 
	return 0;
}
