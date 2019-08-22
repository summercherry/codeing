#include <iostream>
using namespace std;

int a[105];

// 函数要在 [left, right] 左闭右闭的区间查找
// x 是要查找的值，返回值为查找到的坐标
int binarySearch(int left, int right, int x){
	int mid;
	// 左闭右闭区间的结束条件是 left > right
	if(left <= right){
		mid = (left + right) / 2;
		if(a[mid] == x) {
			return mid;
		} else if(a[mid] > x) {
			// 中间值比目标值大，需要查找中间值左边的区间。
			return binarySearch(left, mid - 1, x);
		} else {
			// a[mid] < x
			// 中间值比目标值小，需要查找中间值右边的区间。
			return binarySearch(mid + 1, right, x);
		}
	} else {
		return -1;
	}
}

int main()
{
	int n, x, l, r, i;
	cin >> n;
	for(i = 0; i < n; i++) cin >> a[i];
	cin >> x;
	// 查找区间是左闭右闭
	l = 0;
	r = n - 1;
	cout << binarySearch(l, r, x);
	return 0;
}
