#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n, a[10005], x, left, right, mid, i;
	cin >> n;
	// ���ֲ������壬�ҵ���������գ��ҿ�������  [left, right)
	for (i = 0; i < n; i++) cin >> a[i];
	cin >> x;
	left = 0;
	right = n;
	// ��߽�ı����䣬�ұ߽翪����  [left, right)
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
