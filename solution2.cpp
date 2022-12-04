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