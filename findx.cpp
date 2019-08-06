#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n, a[10005], x, left, right, mid, i;
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	cin >> x;
	// 二分查找主体，找的区间是左闭，右开的区间 [left, right)
	left = 0;
	right = n;		// 右边界的开区间
	for(  ; left < right;  ) {
		mid = (left + right) / 2;
		if (a[mid] < x) {
			left = mid + 1;			
		} else {
			right = mid;			
		}
	}
	
	if (left < n && a[left] == x) {
		cout << left;//输出right也可以
	}
	else cout << -1;
	
	return 0;
}
