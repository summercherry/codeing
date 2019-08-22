#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

const int LEN = 105;
char s[LEN];
int a[LEN + 30] = {0},b[LEN + 30] = {0}, len, n;

// 判断一个数是否回文，是回文返回 true。 
bool judge(int a[]){   
	int t = len / 2;
	for (int i = 0; i < t ; i++) {
		if (a[i]!= a[len - i - 1 ]) {
			return false;
		}
	}
	return true;
}

//整数数组 a 和反序数组 b 进行 n 进制的加法运算
void add(int a[]){
 	int i;
 	for (int i = 0;i < len; i++){
 		b[i] = a[len - i - 1]; //反序 b
	 }
	 for (int i = 0;i < len; i++){
	 	a[i] += b[i];  //逐位相加
	 } 
	 //处理进位
	 for (int i = 0;i < len; i++){
	 	a[i + 1] += a[i] / n;
	 	a[i] %= n;
	 }
	 if (a[len] > 0) len += 1;  //最高位更新 
 }
 
int main(){
 	
	// n 进制数 s 
	cin >> n >> s; 
	len = strlen(s);
	
	//将字符转化为数字，低位在前。 
	for (int i = 0; i < len; ++i) {
		if ('0' <= s[i] && s[i] <= '9')
			a[len- i - 1] = s[i]-'0';
		else
			a[len- i - 1] = s[i]-'A' + 10;
			//注意16进制,需要变成相应的数值
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
