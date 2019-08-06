#include <iostream>
using namespace std;
int N, M, P;
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
	int tmp;
	// N �쵱�У���������һ�졣
	int max = 0;

	cin >> N >> M ;	//¼��N��M

	// ¼���¶ȿ�������
	for (int i = 0; i < N; i++){
		cin >> expense[i];
	}
	//¼����������� 
	cin >> P;
	for (int i = 0;i < P; i++){
		cin >> tmp;
		if ( check(tmp) ){
		cout << "true" << endl;
		} else {
		cout << "false" << endl;
		}
	}
	
	return 0;
}
