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