#include <iostream>
using namespace std;

int a[105];

// ����Ҫ�� [left, right] ����ұյ��������
// x ��Ҫ���ҵ�ֵ������ֵΪ���ҵ�������
int binarySearch(int left, int right, int x){
	int mid;
	// ����ұ�����Ľ��������� left > right
	if(left <= right){
		mid = (left + right) / 2;
		if(a[mid] == x) {
			return mid;
		} else if(a[mid] > x) {
			// �м�ֵ��Ŀ��ֵ����Ҫ�����м�ֵ��ߵ����䡣
			return binarySearch(left, mid - 1, x);
		} else {
			// a[mid] < x
			// �м�ֵ��Ŀ��ֵС����Ҫ�����м�ֵ�ұߵ����䡣
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
	// ��������������ұ�
	l = 0;
	r = n - 1;
	cout << binarySearch(l, r, x);
	return 0;
}
