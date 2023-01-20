#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool check(int a, int b, int c){
	return (b<a && b<c) || (b>a && b>c);
}

int main() {
	int t;
	 cin>>t;
	
	while(t--){
		int n;
		 cin >> n;
		
		vector<int> A(n);
		 for(int i = 0;i< n;i++)
		    cin>>A[i];
	    
	    sort(A.begin(), A.end());
	    vector<int> ans(0);
	    for(int i = 0;i < n/2;i++){
			ans.push_back(A[i]);
			ans.push_back(A[i + n/2]);
		}
	    
	    bool lmao = false;
	    for(int i = 0 ;i < n;i++){
	    	if(i == 0){
	    		if(!check(ans[n-1], ans[i], ans[i+1])){
					lmao = true;
					break;
				}
			}else if(i == n - 1){
				if(!check(ans[i-1], ans[i], ans[0])){
					lmao = true;
					break;
				}
			}else{
				if(!check(ans[i-1], ans[i], ans[i+1])){
					lmao = true;
					break;
				}
			}
		}
	    
	    if(n%2 == 1 || lmao){
	    	cout<< "NO" <<endl;
		}else{
			cout<< "YES" << endl;
			
			for(int i = 0;i< n;i++)
			  cout<<ans[i]<<" ";
			cout<<endl;
		}
	} 
	 
	return 0;
}
