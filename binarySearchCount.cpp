#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n, a[10005], x, left, right, mid, i;
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	cin >> x;
	int count = 0;

	// ���ֲ������壬�ҵ���������գ���Ҳ�յ����� [left, right]
	left = 0;
	right = n - 1;		// �ұ߽�ı�����
	for(  ; left <= right;  ) {//�ж���������[left, right]�������ҽ�����������е�ʱ����Խ���ѭ��
		count ++;
		mid = (left + right) / 2;// ���ֲ���ʱ����д�������������ܴ��ʱ����ܻᵼ��int���������
		if (a[mid] == x) {
			// ��ȵ�������˳�ѭ����
			break;
		} else if (a[mid] > x) {
			// mid λ�õ�ֵ��Ҫ�ҵ� x ��˵�� x �� mid ��ߡ�
			right = mid - 1;
		} else {
			// mid λ�õ�ֵ��Ҫ�ҵ� x С��˵�� x �� mid �ұߡ�
			left = mid + 1;
		}
		//�������ÿ�ε�left, mid, right����ѧ����ֱ�۵����ÿ�ζ��ֵĹ��̡�
	}
	if (left <= right) cout << mid << endl << count;
	else cout << -1 << endl << count;
	return 0;
}
