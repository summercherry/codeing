//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int number, a[1000], x, left, right, mid, i;//[]����ұ�
//	cin >> number;
//	for (i=0; i< number; i++) {
//		cin >> a[i];
//	}
//	cin >> x;
//	// ���ֲ������壬�ҵ���������գ��ҿ������� [left, right)
//	left = 0;
//	right = number ;		// �ұ߽�Ŀ�����
//	while( left < right ) {//�ж���������[left, right]�������ҽ�����������е�ʱ����Խ���ѭ��
//		mid = ((right - left) >> 1) + left;
//		if (a[mid] == x) {
//			// ��ȵ�������˳�ѭ����
//			break;
//		} else if (a[mid] > x) {
//			// mid λ�õ�ֵ��Ҫ�ҵ� x ��˵�� x �� mid ��ߡ�
//			right = mid ; //��Ȼ�ᶪʧmid��ֵ
//		} else {
//			// mid λ�õ�ֵ��Ҫ�ҵ� x С��˵�� x �� mid �ұߡ�
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
//	// ���ֲ������壬�ҵ���������գ���Ҳ�յ����� [left, right]
//	left = 0;
//	right = n - 1;		// �ұ߽�ı�����
//	for(  ; left <= right;  ) {//�ж���������[left, right]�������ҽ�����������е�ʱ����Խ���ѭ��
//		mid = (left + right) / 2;// ���ֲ���ʱ����д�������������ܴ��ʱ����ܻᵼ��int���������
//		if (a[mid] == x) {
//			// ��ȵ�������˳�ѭ����
//			break;
//		} else if (a[mid] > x) {
//			// mid λ�õ�ֵ��Ҫ�ҵ� x ��˵�� x �� mid ��ߡ�
//			right = mid - 1;
//		} else {
//			// mid λ�õ�ֵ��Ҫ�ҵ� x С��˵�� x �� mid �ұߡ�
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

	// ���ֲ������壬�ҵ���������գ���Ҳ�յ����� [left, right]
	left = 0;
	right = n - 1;		// �ұ߽�ı�����
	for(  ; left <= right;  ) {//�ж���������[left, right]�������ҽ�����������е�ʱ����Խ���ѭ��
		mid = (left + right) / 2;// ���ֲ���ʱ����д�������������ܴ��ʱ����ܻᵼ��int���������
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
//	// ���ֲ������壬�ҵ���������գ���Ҳ�յ����� [left, right]
//	left = 0;
//	right = n - 1;		// �ұ߽�ı�����
//	for(  ; left <= right;  ) {//�ж���������[left, right]�������ҽ�����������е�ʱ����Խ���ѭ��
//		mid = (left + right) / 2;// ���ֲ���ʱ����д�������������ܴ��ʱ����ܻᵼ��int���������
//		if (a[mid] == x) {
//			if(mid > 0 && a[mid-1] == x){
//                right = mid-1;  // ��������ƽ�
//            }
//            else{
//                 break;
//            }
//		} else if (a[mid] > x) {
//			// mid λ�õ�ֵ��Ҫ�ҵ� x ��˵�� x �� mid ��ߡ�
//			right = mid - 1;
//		} else {
//			// mid λ�õ�ֵ��Ҫ�ҵ� x С��˵�� x �� mid �ұߡ�
//			left = mid + 1;
//		}
//	}
//	if (left <= right) cout << mid;
//	else cout << -1;
//	return 0;
//}


