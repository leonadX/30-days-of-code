#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int t; 
	 cin>>t;
	
	while(t--){
	   ll n;
	   cin>>n;
	   
	   ll sum = (n/3)*2 + (n/2)*2 + n;
	   cout<<sum<<endl;	
	}
	return 0;
}
