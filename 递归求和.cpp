#include<iostream>
using namespace std;

int fac(int n)  //�ݹ麯��
{
	//if (n == 1) return 1; //�ݹ���� 
	return (fac(n-1) + n);  //������һ��ݹ�
} 
int main()
{
	int n;
	cin >> n;  //����t��ֵ
	cout << "s=" << fac(n) << endl; //����1��t���ۼӺͣ�������
}

