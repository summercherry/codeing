//#include <iostream>
//using namespace std;
//
//int pluss(int a1[100],int m){
//	//�ں����ⶨ�����飬ͨ���βδ��뺯�����ں������޸����� 
//	int carry = 0;
//	for(int i = 0; i < m; i++)
//	{
//		int tmp = a1[i] + a1[i] + carry;
//		carry = tmp / 10;
//		a1[i] = tmp % 10;
//	}
//
//	// ������һ����λ����Ҫ��������
//	if(carry) {
//		a1[m] = carry;
//		m = m + 1;//��λ��1 
//	}
//	return m;//����ִ�мӷ��Ժ��λ�� 
//} 

//int main()
//{
//	// ��ʼ���Ͷ�������������
//	int num1[100] = {0};
//	//��������
//	int n;
//	cin >> n;
//	num1[0] = 1;//2^0=1 
//	sum[0] = num1[0];
//	int p = 1;//�洢λ�����Ӹ�λ��ʼ 
//	for (int i = 0; i < n; i++){
//		p = pluss(num1, p);	
//	}
//
//	// ���
//	p = p - 1; //��λ����Ϊ�±� 
//	for( ; p >= 0 ; p--){
//		cout<< num1[p];
//	}
//	return 0;
//}
#include <iostream>
using namespace std;

int main() {
	int num[105] = {1}, n;
	cin >> n;

	int k = 1;  //�����λ��
	for(int i = 0; i < n; i++) {  //�� N ��2
		int carry = 0;
		for(int j = 0; j < k; j++) { // ��λ���г� 2 ����
			num[j] = num[j] * 2 + carry;
			carry = num[j] / 10;
			num[j] = num[j] % 10;
		}
		if(carry) {
			num[k] = carry;
			k = k + 1;//��λ��1 
		}
	}

	//���
	k = k - 1; //��λ����Ϊ�±� 
	for( ; k >= 0 ; k--){
		cout<< num[k];
	}

	return 0;
}

