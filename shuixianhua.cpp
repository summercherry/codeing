#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int i, num, sum, tmp;
	cin >> num;

	// ���� 100~num ���������ݣ������������������
	for(i = 100; i <= num; i++) {
		sum = 0;
		tmp = i;
		while (tmp / 10 != 0){ 
			sum +=  pow(tmp % 10, 3); //�Ӹ�λ���ֿ�ʼ��ȡ 
			tmp = tmp / 10;
			//��������ľ�Ϊ����ʱ�����Ϊ���ͣ���ȥС���� 
		}
		sum +=  pow(tmp % 10, 3);
		if (i == sum)
			cout << i << endl;
	}
	return 0;
}

