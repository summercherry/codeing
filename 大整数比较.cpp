#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int main()
{
	// ��ʼ���Ͷ����־λ
	int num1[200] = {0}, num2[200] = {0}, flag = 0;
	//flag�ĳ�ʼֵ��Ϊ0����ΪĬ�ϵ��ڵ�״̬��
	//������ֻ��Ҫ�����������ڵ�����������У��޸�flag��ֵ��
	char str1[201], str2[201];
	
	// ��������
	cin >> str1 >> str2;

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	// ���ݴ洢
	for(int i = 0; i < len1; i++) {
		num1[i] = str1[len1 -i-1] - '0';//��д�±�
	}
	for(int i = 0; i < len2; i++) {
		num2[i] = str2[len2 -i-1]   ;//���
	}
	//���ݱȽ�
	int i;
	if (len1 > len2) flag =  1;
	//num1��λ������num2��num1��num2��
	if (len1 < len2) flag = -1;
	//num1��λ��С��num2��num1��num2С
	if (len1 == len2) {
		for(i = len1; i > 0; i--){  //�Ӹ�λ����λ�Ƚ�
			if (num1[i] > num2[i]) {
				flag =  1;
				break;
			}
			if (num1[i] < num2[i]){
				flag = -1;
				break;
			} 
		}
	}

	//���
	cout << str1 ;
	if (flag == 0)
		cout << " = ";
	else if (flag == 1)
		cout << " > ";
	else cout << " < ";
	cout << str2;
	return 0;
}
