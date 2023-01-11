#include <string.h>
#include <iostream>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int t; 
	 cin>>t;
	 
	while(t--){
		int n;
		string s;
		 cin>>n;
		 cin>>s;
		
		ll ans = 0, a[n];
		a[n-1] = 0;
		for(int i = n-2;i >= 0;i--){
			if(s[i] != s[i+1]) a[i] = 1 + a[i+1];
			else a[i] = a[i+1];
			ans += a[i];
		} 
		cout<<ans + n<<endl;
	}
	 
	return 0;
}
