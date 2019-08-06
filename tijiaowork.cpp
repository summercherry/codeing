#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

struct Task {
	int a;  //�� i ���Ծ��л�������Ŀ����
	int b;  //�� i ���Ծ���Ŀ��������
	double score;
} task[1000];

bool compare(Task m, Task n){
	return m.score < n.score;	
}

int main() {
	int n, k, i, j;
	//���ݶ��� 
	cin >> n >> k;
	for (i = 0; i < n; i++)
		cin >> task[i].a;
	for (i = 0; i < n; i++)
		cin >> task[i].b;

	// Ŀ��ƽ���ֵ���߽���ұ߽�
	double lb = 0, ub = 1;

	for(; ub-lb > 0.001;) {
		double x = (lb+ub)/2;	
		
		for (i = 0; i < n; i++) 
			task[i].score = task[i].a - task[i].b * x;
		
//		// ѡ������ 
//		for(i = 0; i < n; ++i) {
//			int t = 0; 
//			for(j = 1; j < n - i; ++j) {
//				if(task[t].score < task[j].score) {
//					t = j;
//				}
//			}
//			Task tmp = task[t];
//			task[t] = task[n - i - 1];
//			task[n - i - 1] = tmp;
//		}
		sort(task, task + n, compare);
		
		// ��֤���Ƿ����� 
		double total = 0;
		for (j = k; j < n; j++) {
			// �ۼ�ÿ����ҵ�Ը�ԣ��ȷ�������Ĺ���
			total += task[j].score;
		}
		if (total >= 0) lb = x;
		else ub = x;
	}
	
	// ͳ�������Ծ� 
	double num = 0, all = 0;
	for(i = k; i < n; ++i) {
		num += task[i].a;
		all += task[i].b;
	}
	
	// �������� 
	cout << int( 100 * num / all + 0.5) << endl;
	return 0;
}

