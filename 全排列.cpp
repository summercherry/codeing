#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

// a[]���ڴ洢������ַ���
char a[1001];

// b[x] �����洢ÿһ��ȫ��������ĸ����ַ��� a[] ���е��±�
// ���� x ��ȫ�����е�λ��
int b[1001];

// ������� a[x] ĳ����ĸ�Ƿ��Ѿ���ǰ��ĵݹ鵱���õ���
// 0 ��ʾû���ù���1 ��ʾ�Ѿ��ù��ˡ�
int c[1001];

// ��ʼ�ַ�������
int tot;

void permutation(int n)
{
	for(int i=0 ; i<tot ;i++) 
	// ����ÿһ�� a[x] ����ĸ
	{
		if(c[i] == 0) {
			// �����ĸû�б��ù���
			// ��������ĸ��ռ���ˡ�
			c[i] = 1;
			// ��¼�� n ��λ��ʹ�� a[i] �����ĸ��
			b[n] = i;
			// ��ǰ n ����ĸ�Ѿ���ȷ����ǰ���£�̽�� n+1 λ�á�
			permutation(n+1);
			// ע�⣬�ӵݹ����֮����Ҫ��� c[i] ��ĸ��ʹ�ñ�ǡ�
			// ��Ϊ i ѭ������һ����ĸ֮�����ڵ� c[i] ����δ��ѡ�����ĸ�ˡ�
			c[i] = 0;
		}
	}
	if(n==tot)
	// �Ѿ��ҵ����һ����ĸ�ˣ���������ˡ�
	{
		for(int i=0;i<tot;i++)
			cout<<a[b[i]];
		cout<<endl; 
	}
}

int main()
{
	cin>>a;
	tot=strlen(a);
	permutation(0); 
	return 0;
}
