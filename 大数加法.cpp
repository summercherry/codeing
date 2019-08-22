#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
	// 定义操作数和结果
	int num1[200] = {0}, num2[200] = {0}, sum[201] = {0};
	char str1[201], str2[201];

	cin >> str1 >> str2;

	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int n = max(len1, len2);


	// 数据输入
	for(int i = 0; i < len1; i++) {
		num1[i] = str1[len1 - 1 - i] - '0';
	}
	for(int i = 0; i < len2; i++) {
		num2[i] = str2[len2 - 1 - i] - '0';
	}

	// 加法操作
	int carry = 0;
	for(int i = 0; i < n; i++)
	{
		int tmp = num1[i] + num2[i] + carry;
		carry = tmp / 10;
		sum[i] = tmp % 10;
	}

	// 针对最后一个进位，需要单独处理。
	if(carry) sum[n] = carry;

	// 输出
	// 去掉结果中开头的 0
	for( ; n>0; n--) {
		if(sum[n] != 0) break;
	}
	for( ;n >=0 ;n--){
		cout<< sum[n];
	}

	return 0;
}
