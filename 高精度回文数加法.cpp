#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

const int LEN = 105;
char s[LEN];
int a[LEN + 30] = {0},b[LEN + 30] = {0}, len, n;

// �ж�һ�����Ƿ���ģ��ǻ��ķ��� true�� 
bool judge(int a[]){   
	int t = len / 2;
	for (int i = 0; i < t ; i++) {
		if (a[i]!= a[len - i - 1 ]) {
			return false;
		}
	}
	return true;
}

//�������� a �ͷ������� b ���� n ���Ƶļӷ�����
void add(int a[]){
 	int i;
 	for (int i = 0;i < len; i++){
 		b[i] = a[len - i - 1]; //���� b
	 }
	 for (int i = 0;i < len; i++){
	 	a[i] += b[i];  //��λ���
	 } 
	 //�����λ
	 for (int i = 0;i < len; i++){
	 	a[i + 1] += a[i] / n;
	 	a[i] %= n;
	 }
	 if (a[len] > 0) len += 1;  //���λ���� 
 }
 
int main(){
 	
	// n ������ s 
	cin >> n >> s; 
	len = strlen(s);
	
	//���ַ�ת��Ϊ���֣���λ��ǰ�� 
	for (int i = 0; i < len; ++i) {
		if ('0' <= s[i] && s[i] <= '9')
			a[len- i - 1] = s[i]-'0';
		else
			a[len- i - 1] = s[i]-'A' + 10;
			//ע��16����,��Ҫ�����Ӧ����ֵ
	} 
	int step;
	if (judge(a)){
		cout <<"STEP="<< 0 <<endl;
		return 0;
	}
	step = 0;
	while (step <= 30){
		add(a);
		step += 1;
		if (judge(a)){
			cout << "STEP=" << step <<endl;
			return 0;
		}
	}
	cout << "Impossible!";
	return 0;
}
