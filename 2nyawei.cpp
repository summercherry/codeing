#include <iostream>
using namespace std;

int change(char s[],int n[])//ѹλ�ĺ��Ĳ��� 
{
	char temp[Maxn];//�м���� ��¼ÿpλ���� 
	int len = strlen(s+1),cur=0;
	while(len/p){//���len���ڵ���p 
		strncpy(temp,s+len-p+1,p);//�Ӻ���س���pλ�� 
		n[++cur]=atoi(temp);//��tempת�������� 
		len -= p;//������pλ 
	}
	if(len){//������len��������p�ı��� Ҳ���ǻ�ʣ�µ㲻��pλ�� 
		memset(temp,0,sizeof(temp));
		strncpy(temp,s+1,len);//ȫ������ 
		n[++cur]=atoi(temp);//���� 
	}
	return cur;//����һ��λ�� 
}


int pluss(int a1[100],int m){
	//�ں����ⶨ�����飬ͨ���βδ��뺯�����ں������޸����� 
	int carry = 0;
	for(int i = 0; i < m; i++)
	{
		int tmp = a1[i] + a1[i] + carry;
		carry = tmp / 10;
		a1[i] = tmp % 10;
	}

	// ������һ����λ����Ҫ��������
	if(carry) {
		a1[m] = carry;
		m = m + 1;//��λ��1 
	}
	return m;//����ִ�мӷ��Ժ��λ�� 
}

int main()
{
	// ��ʼ���Ͷ�������������
	int num1[100] = {0};
	//��������
	int n;
	cin >> n;
	num1[0] = 1;//2^0=1 
	sum[0] = num1[0];
	int p = 1;//�洢λ�����Ӹ�λ��ʼ 
	for (int i = 0; i < n; i++){
		p = pluss(num1, p);	
	}

	// ���
	p = p - 1; //��λ����Ϊ�±� 
	for( ; p >= 0 ; p--){
		cout<< num1[p];
	}
	return 0;
}
 


