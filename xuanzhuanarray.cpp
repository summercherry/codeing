#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
	int x, n, l, r, mid, i,a[10005];
	cin >> n ;
	for (i = 0;i < n; i++) {
		cin >> a[i];
	}
	cin >> x;
	l = 0;
	r = n - 1;
	for ( ; l <= r; ){
		mid = l + (r - l)/2;
		if (a[mid] == x)
			break;
		if (a[mid] >=  a[r]  ){
			if (a[mid] > x && x >= a[l])
				r = mid - 1;
			else l = mid + 1;
		}
		else{
			if (a[mid] < x && x <= a[r])
				l = mid + 1;
			else r = mid - 1;
		}
	}
	if (l <= r ) cout << mid;
	else cout<< -1;
	return 0;
}
