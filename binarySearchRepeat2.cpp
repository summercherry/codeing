#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n, a[10005], x, left, right, mid, i;
	cin >> n;
	// 二分查找主体，找的区间是左闭，右开的区间  [left, right)
	for (i = 0; i < n; i++) cin >> a[i];
	cin >> x;
	left = 0;
	right = n;
	// 左边界的闭区间，右边界开区间  [left, right)
	for(  ; right - left > 1 ;  ) { 
		mid = (left + right ) / 2;
		if (a[mid] <= x) {	
			left = mid;			
		} else {
			right = mid;			
		}
	}
	if (a[left] == x ) {
		cout << left <<endl;
	} else {
		cout << -1;
	}
	return 0;
}
