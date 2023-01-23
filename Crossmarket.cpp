#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int check(int a){
	if(a>1)
	 return 1;
	return 0;
}

int main() {
	int t;
	 cin>>t;
	
	while(t--){
		int n,m;
		 cin>>n>>m;
		 
		cout<<(n-1)+(m-1)+min(n-1,m-1)+check(max(n,m))<<endl;
	} 
	 
	return 0;
}
