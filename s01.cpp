#include<iostream>
using namespace std;

int main(){
	int n, i, j;
	// ÿһ�֣����� s ���任�� t ����Ȼ���ٿ���������
	char s[20000], t[20000];
	int slen, tlen;
	cin >> n;

	s[0] = '0';
	slen = 1;

	// �任 n �� 
	for(i = 0; i < n; i++){
		tlen = 0;
		// �����ַ����е�ÿһλ 
		for(j = 0; j < slen; j++){
			//1���01��0���1 
			if(s[j] == '1'){
				t[tlen] = '0';
				t[tlen+1] = '1';
				tlen += 2;
			} else {
				t[tlen] = '1';
				tlen++; 
			}
		}
		// ��ɱ任�󣬸��ƻ�ԭ�ȵ��ַ�����
		// ׼����һ�α任 
		for(j = 0; j < tlen; j++){
			s[j] = t[j];
		}
		slen = tlen;
	}
	 
	for(j = 0; j < slen; j++)
		cout << s[j];
	return 0;
}

