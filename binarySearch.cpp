//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int number, a[1000], x, left, right, mid, i;//[]左闭右闭
//	cin >> number;
//	for (i=0; i< number; i++) {
//		cin >> a[i];
//	}
//	cin >> x;
//	// 二分查找主体，找的区间是左闭，右开的区间 [left, right)
//	left = 0;
//	right = number ;		// 右边界的开区间
//	while( left < right ) {//判断条件保持[left, right]，当查找结果不在数组中的时候可以结束循环
//		mid = ((right - left) >> 1) + left;
//		if (a[mid] == x) {
//			// 相等的情况，退出循环。
//			break;
//		} else if (a[mid] > x) {
//			// mid 位置的值比要找的 x 大，说明 x 在 mid 左边。
//			right = mid ; //不然会丢失mid的值
//		} else {
//			// mid 位置的值比要找的 x 小，说明 x 在 mid 右边。
//			left = mid + 1;
//		}
//	}
//	if (left < right) {
//		cout << mid;
//	} else {
//		cout << -1;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//int main(){
//	int n, a[10005], x, left, right, mid, i;
//	cin >> n;
//	for (i = 0; i < n; i++) cin >> a[i];
//	cin >> x;
//
//	// 二分查找主体，找的区间是左闭，右也闭的区间 [left, right]
//	left = 0;
//	right = n - 1;		// 右边界的闭区间
//	for(  ; left <= right;  ) {//判断条件保持[left, right]，当查找结果不在数组中的时候可以结束循环
//		mid = (left + right) / 2;// 二分查找时这种写法，在数据量很大的时候可能会导致int类型溢出。
//		if (a[mid] == x) {
//			// 相等的情况，退出循环。
//			break;
//		} else if (a[mid] > x) {
//			// mid 位置的值比要找的 x 大，说明 x 在 mid 左边。
//			right = mid - 1;
//		} else {
//			// mid 位置的值比要找的 x 小，说明 x 在 mid 右边。
//			left = mid + 1;
//		}
//	}
//	
//	if (left <= right) cout << mid << endl;
//	else cout << -1;
//	cout << "left = " << left << endl;
//	cout << "right = "<< right <<endl;
//	
//	return 0;
//}
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
	for(  ; left <= right;  ) {//判断条件保持[left, right]，当查找结果不在数组中的时候可以结束循环
		mid = (left + right) / 2;// 二分查找时这种写法，在数据量很大的时候可能会导致int类型溢出。
		if (a[mid] >= x) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	
	if (left < n && a[left] == x) {
        cout << left << endl;
    }
	else cout << -1;
	cout << "left = " << left << endl;
	cout << "right = "<< right <<endl;
	
	return 0;
}

//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//int main(){
//	int n, a[10005], x, left, right, mid, i;
//	cin >> n;
//	for (i = 0; i < n; i++) cin >> a[i];
//	cin >> x;
//
//	// 二分查找主体，找的区间是左闭，右也闭的区间 [left, right]
//	left = 0;
//	right = n - 1;		// 右边界的闭区间
//	for(  ; left <= right;  ) {//判断条件保持[left, right]，当查找结果不在数组中的时候可以结束循环
//		mid = (left + right) / 2;// 二分查找时这种写法，在数据量很大的时候可能会导致int类型溢出。
//		if (a[mid] == x) {
//			if(mid > 0 && a[mid-1] == x){
//                right = mid-1;  // 不断向左逼近
//            }
//            else{
//                 break;
//            }
//		} else if (a[mid] > x) {
//			// mid 位置的值比要找的 x 大，说明 x 在 mid 左边。
//			right = mid - 1;
//		} else {
//			// mid 位置的值比要找的 x 小，说明 x 在 mid 右边。
//			left = mid + 1;
//		}
//	}
//	if (left <= right) cout << mid;
//	else cout << -1;
//	return 0;
//}


