#include<iostream>
using namespace std;

int main(){
	int n, i, j;
	// 每一轮，都从 s 串变换到 t 串；然后再拷贝回来。
	char s[20000], t[20000];
	int slen, tlen;
	cin >> n;

	s[0] = '0';
	slen = 1;

	// 变换 n 次 
	for(i = 0; i < n; i++){
		tlen = 0;
		// 处理字符串中的每一位 
		for(j = 0; j < slen; j++){
			//1变成01，0变成1 
			if(s[j] == '1'){
				t[tlen] = '0';
				t[tlen+1] = '1';
				tlen += 2;
			} else {
				t[tlen] = '1';
				tlen++; 
			}
		}
		// 完成变换后，复制回原先的字符串，
		// 准备下一次变换 
		for(j = 0; j < tlen; j++){
			s[j] = t[j];
		}
		slen = tlen;
	}
	 
	for(j = 0; j < slen; j++)
		cout << s[j];
	return 0;
}

