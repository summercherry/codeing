#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n,a[200005],i;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> a[i];
	}
	for (i = n-1; i >= 0;i -= 2){
		cout << a[i] << " ";
	}
	if (n % 2 != 0){
		i = 1;	
	}
	else {
		i = 0;
	}
	for ( ; i < n; i += 2){
		cout << a[i] << " ";
	}
	return 0;
	
}
