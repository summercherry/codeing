#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n, a[10005], x, left, right, mid, i;
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	cin >> x;
	// ���ֲ������壬�ҵ���������գ��ҿ������� [left, right)
	left = 0;
	right = n;		// �ұ߽�Ŀ�����
	for(  ; left < right;  ) {
		mid = (left + right) / 2;
		if (a[mid] < x) {
			left = mid + 1;			
		} else {
			right = mid;			
		}
	}
	
	if (left < n && a[left] == x) {
		cout << left;//���rightҲ����
	}
	else cout << -1;
	
	return 0;
}
