#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<cmath>

using namespace std;

long long  n;            // ��Ӫ����
long long c[100005];    // ÿ����Ӫ�ĳ�ʼ����
long long m,p1,s1,s2;   // ������λ�ã���һ������λ���������ڶ�������λ�á�

int main()
{
	cin>>n;
	for(long long i=1; i<=n; i++) {
		cin>>c[i];
	}
	cin>>m>>p1>>s1>>s2;
	c[p1] += s1;    // ֱ�Ӱ� S1 �ı�Դ���䵽 P1 λ�á�
	long long powL=0;
	long long powR=0;
	for(long long i=1; i<=n; i++) {
		if(i<m) {
			powL += (m-i) * c[i];
		}
		if(i>m) {
			powR += (i-m) * c[i];
		}
	}
	// �ȼ��貹�����Ͷ���� m �㣬�����һ��������ֵ��
	long long p2 = m;
	//C �⺯�� long int labs(long int x) ���� x �ľ���ֵ��
	long long diff = labs(powL - powR);
	for(long long i=1; i<=n ;i++) {
		// ��ߵ��������ұߵ�������ͬʱ������/���� s2 Ͷ�ź��������
//		long long temp = labs(powL + (m-i)*s2 - powR );
//		if(temp < diff) {
//			p2 = i;
//			diff = temp;
//		}
		if(i<m) {
			// ��ߵ��������ұߵ�������ͬʱ������ s2 Ͷ�ź��������
			long long temp = labs(powL - powR + (m-i)*s2);
			if(temp < diff) {
				p2 = i;
				diff = temp;
			}
		} else if(i>m) {
			// ��ߵ��������ұߵ�������ͬʱ�ټ��� s2 Ͷ�ź��������
			long long temp = labs(powL - powR - (i-m)*s2 );
			if(temp < diff) {
				p2 = i;
				diff = temp;
			}
		}
		
	}
	cout<<p2<<endl;
	return 0;
}

