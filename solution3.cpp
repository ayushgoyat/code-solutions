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