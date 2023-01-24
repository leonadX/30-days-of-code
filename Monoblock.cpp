#include <stdint.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int32_t main() {
	ll n, m;
	 cin>>n>>m;
	 
	ll a[n]; 
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	 
	ll cnt=1;
	ll sum=1; 
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]) cnt+=1;
		sum+=cnt;
	}
	
	ll cur=sum;
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]) cur-=(n-i+1);
		else cur-=1;
		sum+=cur;
		//cout<<sum<<endl;
	}
	
	ll i,x; 
	for(int j=0;j<m;j++){
	 	cin>>i>>x;
	 	i=i-1;
	 	
	 	if(a[i]==x) sum+=0;
	 	else if(i!=0 && i!=n-1 && (a[i]==a[i-1] && a[i]==a[i+1]) && (a[i-1]!=x && a[i+1]!=x)) sum+=(i*(n-i)) + (n-i-1)*(i+1);
	 	else if(i!=n-1 && a[i]==a[i+1] && a[i-1]!=x) sum+=(n-i-1)*(i+1);
	 	else if(i!=0 && a[i]==a[i-1] && a[i+1]!=x) sum+=i*(n-i);
	 	else if(i!=0 && i!=n-1 && a[i+1]==x && a[i-1]==a[i]) sum+= i - (n-i-1);
	 	else if(i!=0 && i!=n-1 && a[i-1]==x && a[i+1]==a[i]) sum+= (n-i-1) - i;
		else if(a[i+1]==x && a[i-1]==x && i!=0 && i!=n-1) sum-=(i*(n-i)) + (n-i-1)*(i+1);
		else if(a[i+1]==x && i!=n-1) sum-=(n-i-1)*(i+1);
	 	else if(a[i-1]==x && i!=0) sum-=(i*(n-i));
	 	a[i]=x;
	 	cout<<sum<<endl;
	}
	
	return 0;
}
