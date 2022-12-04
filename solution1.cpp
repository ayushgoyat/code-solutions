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