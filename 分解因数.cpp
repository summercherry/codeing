#include<iostream>
#include<cmath>
using namespace std;

/**
	@brief ���� a �������м��ַֽⷽʽ
	@param a ��Ҫ���������
	@param b �Ѿ����𵽵�����(��һ����Ҫ���������������)
	@return �����ֽ�ĸ���
*/
int f(int a,int b)
{
	// ���� a=a ��һ����
	int ans=1;
	for(int i=b; i<=sqrt(a) ; i++) {
//	for(int i=2; i<=sqrt(a) ; i++) {
		// ���������Ա�������������ַֽ�
		if(a%i==0) {
			// ע�⣬һ�������˼��һ�������ĳ˻�������һ��������
			// ���������Ҫ��ͣ�صݹ飬ֱ�� [b. sqrt(a)] ������û��������
			// ����ÿ�� a % i == 0 ���������Ҫ�ۼ� ans.
			ans+=f(a/i,i);
			// ����������Ա�����ѭ���������������ͼ�������̽Ѱ����������ֵķֽ�����
		}
	}
	return ans; 
}
int main()
{
	int n,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		cout<<f(a,2)<<endl;
	}
}
