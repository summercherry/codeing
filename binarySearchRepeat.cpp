#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n, a[10005], x, left, right, mid, i;
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	cin >> x;

	// 二分查找主体，找的区间是左闭，右也闭的区间 [left, right]
	left = 0;
	right = n - 1;		// 右边界的闭区间
	for(  ; left <= right;  ) {
		mid = (left + right) / 2;
		if (a[mid] < x) {	
			left = mid + 1;
		} else {
			right = mid - 1;
			
		}
	}
	
	if (left < n && a[left] == x) {
        cout << left;
    }
	else cout << -1;
	
	return 0;
}
