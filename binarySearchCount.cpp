#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n, a[10005], x, left, right, mid, i;
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	cin >> x;
	int count = 0;

	// 二分查找主体，找的区间是左闭，右也闭的区间 [left, right]
	left = 0;
	right = n - 1;		// 右边界的闭区间
	for(  ; left <= right;  ) {//判断条件保持[left, right]，当查找结果不在数组中的时候可以结束循环
		count ++;
		mid = (left + right) / 2;// 二分查找时这种写法，在数据量很大的时候可能会导致int类型溢出。
		if (a[mid] == x) {
			// 相等的情况，退出循环。
			break;
		} else if (a[mid] > x) {
			// mid 位置的值比要找的 x 大，说明 x 在 mid 左边。
			right = mid - 1;
		} else {
			// mid 位置的值比要找的 x 小，说明 x 在 mid 右边。
			left = mid + 1;
		}
		//可以输出每次的left, mid, right，让学生更直观地理解每次二分的过程。
	}
	if (left <= right) cout << mid << endl << count;
	else cout << -1 << endl << count;
	return 0;
}
