#include<iostream>
using namespace std;
int main()
{
	// zero �� one �ֱ�洢 0 �� 1 �ĸ�����
	int i, k, zero, one;
	int a = 0, b = 0;
	// �� 1 ѭ���� 1000 
	for(i = 1; i <= 1000; i++){
		// ��0��1�ĸ�����ֵ��Ϊ0 
		zero = one = 0;

		// ѭ��ͳ�� i ����������
		// ��� k Ϊ���������������Ƶ����һλ�� 1�������� 0��
		// �� k ���ϳ��� 2������ͳ��β���� 0 ���� 1��ֱ�� k Ϊ 0 
		for( k=i; k != 0; k /= 2) {
			if(k % 2 == 1)
				one++; 
			else
				zero++;
		}
		// 0�ĸ����࣬Ϊa�࣬����Ϊb�ࣻ���� 
		if(one > zero) 
			a++;
		else 
			b++;
	}
	//������ 
	cout << a << ' ' << b << endl;
	return 0;
}
