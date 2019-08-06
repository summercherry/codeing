#include <iostream>
using namespace std;
int N, M;
int expense[100005];

// ��֤����������ڵĻ��������� mid��
// �Ƿ��ܴճ����ʵĲ������ڻ��ַ�����
bool check(int mid)  {
	// �ۻ�������������
	int period = 1;

	// ĳ���������ܻ���
	int periodExpense = 0;

	// Ѱ�Ҳ������ڷ������
	for (int i = 0; i < N; i++){
		// �ۼƵ�ǰ���ڵ�ǰ���������ڵĻ����
		periodExpense += expense[i];

		// ������� mid ֵ������һ����
		if(periodExpense > mid){
			periodExpense = expense[i];
			period++;
		}
	}	
	// ���� true ��ʾ�ճ������ڵ��� M �������µķ�����
	// mid ��������Ҫ��
	return period <= M;
}

int main()
{
	// ȫ�� N ��Ļ����ܶ
	int sum = 0;

	// N �쵱�У���������һ�졣
	int max = 0;

	cin >> N >> M;	//¼��N��M

	// ¼���¶ȿ������飬�����ҵ� N ���л������ֵ���� N ��Ļ����ܺ�
	for (int i = 0; i < N; i++){
		cin >> expense[i];
		// ����ȫ�� N ��Ļ����ܶ�
		sum += expense[i];
		if (max < expense[i]) {
			// �ҵ����ջ������ֵ
			max = expense[i];
		}
	}

	// ���ֲ��ҹ��̣����ұա� 
	// ÿ���������ڵĻ�������ͼ��ޣ��ǵ��ջ��������ֵ��
	// ÿ���������ڻ��������ֵ���� N ����ܻ�����
	// �������ұ����䣬l Ӧ����ȡ����ֵ��һ��
	int l = max - 1;
	int r = sum;
	int mid;
	for ( ; r - l > 1 ; ){
		// ��Ϊ�� (l,r] ���ұ����䣬ѭ���� r-l == 1 ʱ�������
		mid = (l + r) / 2;
		if( check(mid) ) {
			// ��� mid ��Ϊ�������ڵĻ������޿��У����ұ߽����ơ�
			r = mid;
		} else {
			// ����mid ̫С����߽����ơ�
			l = mid;
		}
	}
	cout << r << endl;
	return 0;
}
