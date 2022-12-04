#include <iostream>
using namespace std;
#define ll long long 
 
int main() {
 ios_base::sync_with_stdio(false); cin.tie(NULL);
ll n;cin>>n;
ll x;cin>>x;
ll y;cin>>y;
char arr[n];
for(ll i=0;i<n;i++){
	cin>>arr[i];
}
ll alice =0;
ll bob =0;
for(ll i=0;i<n;i++){
	if (arr[i]=='B') {
		i++;
		if (arr[i]=='B') bob=bob+y+y;
	    if (arr[i]=='A') bob=bob+x+y; 
	}
	else alice=alice+x;
	
}
cout<<alice<<" "<<bob;
	return 0;
}