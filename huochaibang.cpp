#include<iostream>
using namespace std;

int matchstick(int n)
{
	int a[10] = {6,2,5,5,4,5,6,3,7,6};//��0-9����Ļ�������
	int sum = 0;
//	while (n / 10 != 0){
//		// n����10������0�Ļ���˵��������������λ
//		sum += a[n % 10];   //���ϸ�λ������
//		n = n / 10;
//	}
//	sum += a[n];     //�������λ�Ļ�����
	while (n != 0){
		// n����10������0�Ļ���˵��������������λ
		sum += a[n % 10];   //���ϸ�λ������
		n = n / 10;
	}
	return sum;
}

int main()
{
//	int n, count = 0;
//	int i, j, result;
//	cin >> n;
//	n -= 4;//��ȥ�Ӻš��Ⱥ���������
//	for (i = 0;i <= 1111;i++)
//	{
//		for (j = 0;j <= 1111;j++)
//		{
//			result = i + j;
//			if (matchstick(i) + matchstick(j) + matchstick(result) == n)
//				//�������ֵĻ���������ӣ�������������ʱ
//				count++;//������+1
//		}
//	}
//	cout << count << endl;
	cout << matchstick(0);//Ϊ0 
	return 0;
}
