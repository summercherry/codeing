#include<iostream>
using namespace std;
int main()
{
	long long n, i;
	bool find = false;
	cin >> n;
	// �� n ��ʼ������¼���ֱ���ҵ�����Ҫ���������
	for( ; !find; n--) 
	{
		find = true;
		for(i = 2; i < n; i++) {
			// �ж� n �Ƿ��ܳ��� i
			if(n % i == 0)
			{
				find = false;
				break;
			}
		}
	}
	// ѭ������ n ���� -- ����������Ҫ�ӻ�����
	cout << n+1;
	return 0;
}
