#include <bits/stdc++.h>
using namespace std;
 
int main() 
{ 
    int n; cin>>n;
    int t; cin>>t;
    multiset <int> a;
    for( int i = 0; i<n; i++ ){
		int x; cin>>x;
		a.insert(x);
	}
 
	int sum = 0;
	for(auto i : a){
		if( t-i == i && a.count(i) > 1 ) sum++;
		else if( t-i != i && a.count(t-i) > 0 ) sum++;
	}
 
	if( sum > 0 ) cout<<"YES";
	else	      cout<<"NO";
 
	return 0;
 
}
