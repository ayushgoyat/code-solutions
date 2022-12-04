

/* 1 st answer */

#include <iostream>
using namespace std;
 
int main() {
 long int a;cin>>a;
 if ((a%5)%4==0) cout << a/5 +(a%5)/4;
 else if ((a%5)%3==0) cout << a/5 +(a%5)/3;
 else if ((a%5)%2==0) cout << a/5 +(a%5)/2;
 else cout << a/5 +(a%5)/1;
 
	return 0;
}

/*2nd answer*/


#include <iostream>
using namespace std;
 
int main() {
long long int n;cin>>n;
long long int arr[n-1];
long long int sum = 0;
for(long long int i=0;i<(n-1);i++){
	cin>>arr[i];
	sum = sum +arr[i];
	
}
long long int y = (n*(n+1))/2;
cout<< y - sum ;
 
	return 0;
}


/* 3rd answer */


#include <iostream>
using namespace std;
 
int main() {
long long int t;cin>>t;
for(long long int i=0;i<t;i++){
 long long int n; cin>>n;
 long long int y = n*(n+1)*(2*n+1)/6;
 long long int z = n*(n+1)*n*(n+1)/4;
 cout<<z-y<<endl;
}
	return 0;
}

/* 4th answer*/

#include <iostream>
using namespace std;
 
int main() {
int t; cin>>t;
for(int i=0;i<t;i++){
	int a; cin>>a;
	int arr[a];
	for(int j=0;j<a;j++){
		cin>>arr[j];
	}
	int sum = 0;
	for(int i=0;i<(a-1);i++){
		for(int j=i+1;j<a;j++){
			if (arr[i]!=arr[j]) sum++; 
		   	else sum=sum;
		}
	}
	if (sum>0) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
 
	return 0;
}

/* 5th answer */

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

/* 6th answer *



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